# 内存模型 memory model

通过客观题，检验自己是否理解rust中使用内存的方式。

1.本题给出一段rust代码和4段C++代码，选出和rust的实际语义最为接近的一段C++代码。(`mut, reference`)
```rust
fn main(){
    let a:i32 = 1;
    let b = &a;
}
```
A.
```c++
int main(){
    int a = 1;
    int b = a;
}
```
B.
```c++
int main(){
    const int a = 1;
    int b = a;
}
```
C.
```c++
int main(){
    int a = 1;
    int *b = &a;
}
```
D.
```c++
int main(){
    const int a = 1;
    int *b = &a;
}
```


2.本题给出一段rust代码和4段C++代码，根据数据存储在内存的哪里(栈、堆), 选出和rust的实际语义最为接近的一段C++代码。(`Box, string`)

```rust
fn main(){
    let mut a = Box::new(12);
    let mut s = "12345";
}
```
A.
```c++
int main(){
    int a = 12;
    char s[6] = "12345";
}
```
B.
```c++
int main(){
    int *a = new int;
    *a = 12;
    char s[6] = "12345";
}
```
C.
```c++
int main(){
    int *a = new int;
    *a = 12;
    char* s = new char[6];
    s[0] = '1'; s[1] = '2'; s[2] = '3'; 
    s[3] = '4'; s[4] = '5'; s[5] = '\0';
}
```
D.
```c++
int main(){
    int a = 12;
    char* s = new char[6];
    s[0] = '1'; s[1] = '2'; s[2] = '3'; 
    s[3] = '4'; s[4] = '5'; s[5] = '\0';
}
```

3.本题给出一段rust代码和4段C++代码，根据数据存储在内存的哪里(栈、堆), 选出和rust的实际语义最为接近的一段C++代码。(`Copy/Move`)

```rust
fn main(){
    let mut x1 = 1;
    let mut x2 = x1;
    let mut y1 = Box::new(1);
    let mut y2 = y1;
}
```

A.
```c++
int main(){
    int x1 = 1;
    int &x2 = x1;

    int *y1 = new int;
    *y1 = 1;
    int *y2;
    y2 = y1; y1 = NULL;
}
```

B.
```c++
int main(){
    int x1 = 1;
    int x2 = x1;

    int *y1 = new int;
    *y1 = 1;
    int *y2 = new int;
    *y2 = *y1;
}
```

C.
```c++
int main(){
    int x1 = 1;
    int x2 = x1;

    int *y1 = new int;
    *y1 = 1;
    int *y2;
    y2 = y1; y1 = NULL;
}
```

D.
```c++
int main(){
    int x1 = 1;
    int &x2 = x1;

    int *y1 = new int;
    *y1 = 1;
    int *y2 = new int;
    *y2 = *y1;
}
```

4.本题给出一段rust代码和4段C++代码，根据数据存储在内存的哪里(栈、堆), 选出和rust的实际语义最为接近的一段C++代码。(`array/Vec`)

```rust
fn main(){
    let a = [1,2,3,4,5];
    let b = vec![0,1,2,3,4];
}
```

A.
```c++
int main(){
    int a[5] = {0,1,2,3,4};
    int b[5] = {0,1,2,3,4}
}

B.
```c++
int main(){
    int a[5] = {0,1,2,3,4};
    int *b = new int[5];
    for(int i=0;i<5;++i){
        b[i] = i;
    }
}
```
C.
```c++
int main(){
    int *a = new int[5];
    for(int i=0;i<5;++i){
        a[i] = i;
    }
    int *b = new int[5];
    for(int i=0;i<5;++i){
        b[i] = i;
    }
}
```

D.
```c++
int main(){
    int *a = new int[5];
    for(int i=0;i<5;++i){
        a[i] = i;
    }
    int b[5] = {1,2,3,4,5};
}
```