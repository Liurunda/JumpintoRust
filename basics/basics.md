　比较一些简单程序的C++版本和rust版本，从而了解rust的基本语法，并简单介绍一些语义的不同

由于很多程序仅用于演示，产生“unused variable”之类的编译警告是正常的。

### Hello world

<table> <tr><th>hello.cpp</th> <th>hello.rs</th></tr><tr><td>

```c++
#include<cstdio>
int main(){
    printf("Hello, world!\n");
    return 0;
}
```
</td><td>

```rust
//std is available to all Rust crates by default
fn main(){//main function without explicit return type
    println!{"Hello,world!"};//print with newline
}
```
</td></tr></table>

### Scalar Variables

<table> <tr><th>variables.cpp</th> <th>variables.rs</th></tr><tr><td>

```c++
#include <cstddef> //size_t
#include <cstdio>
#include <clocale> //setlocale()

int main(){
    int a = 1;
    const unsigned int b = 2;
    auto c = 0xffff;// -std=c++11
    size_t d = 4;// x bits on x-bit machine
    float x = 3.0; double y = 1e-10;
    wchar_t ch = L'烟'; setlocale(LC_ALL, "");
    printf("%lc %d\n",ch,sizeof(wchar_t));
}
```
</td><td>

```rust
use std::mem::size_of; //similar to python import
fn main(){
    let mut a:i32 = 1;
    let b: u32 = 2;
    let c = 0xffff;
    let d: usize = 4;// x bits on x-bit machine
    let x: f32 = 3.0;let y: f64 = 1e-10;
    let ch:char = '烟';//4 byte unicode character
    println!("{} {}",ch,size_of::<char>());
}
```
</td></tr></table>

### loop

<table> <tr><th>loop.cpp</th> <th>loop.rs</th></tr><tr><td>

```c++
#include<cstdio>
#include<vector>
int main(){
    int countdown = 10;
    while(countdown!=0){
        countdown--;
        printf("%d\n",countdown);
    }
    std::vector<int> A = {1,2,3,4,5};
    for(auto a:A){
        printf("%d\n",a);
    }
    for(int i=0;i<7;++i){
        printf("%d\n",i);
    }
    return 0;
}
```
</td><td>

```rust
fn main(){
    let mut countdown = 10;
    while countdown!=0{
        countdown -= 1;
        println!("{}",countdown);
    }
    let A:[i32;5] = [1,2,3,4,5];//rust array
    for a in A.iter(){
        println!("{}",a);
    }
    for i in(0..7){//similar to python range(0,7)
        println!("{}",i);
    }
}
```
</td></tr></table>

### if

<table> <tr><th>if.cpp</th> <th>if.rs</th></tr><tr><td>

```c++
#include<cstdio>
int main(){
    int a = 1, b = 2;
    if(a<b){
        printf("a<b\n");
    }else if(a==b){
        printf("a==b\n");
    }else{
        printf("a>b\n");
    }
    int abs = 0;
    if(a-b<0){
        abs = b-a;
    }else{
        abs = a-b;
    }
    printf("abs of a-b is %d\n", abs);
    return 0;
}
```
</td><td>

```rust
fn main(){
    let a = 1;
    let b = 2;
    if a<b {
        println!("a<b");
    }else if a==b {
        println!("a==b");
    }else{
        println!("a>b");
    }
    let abs = 
    if a-b<0 {
        b-a
    }else{
        a-b
    };//rust if/else statement has "return value"
    println!("abs of a-b is {}", abs);
}
```
</td></tr></table>

### todo

<table> <tr><th>todo.cpp</th> <th>todo.rs</th></tr><tr><td>

```c++

```
</td><td>

```rust

```
</td></tr></table>