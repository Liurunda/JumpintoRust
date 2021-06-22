　比较一些简单程序的C++版本和rust版本，从而了解rust的基本语法，并简单介绍一些语义的不同

由于很多程序仅用于演示，产生“unused variable”之类的编译警告是正常的。

### Hello world

<table> <tr><th>hello.cpp</th> <th>hello.md</th></tr><tr><td>

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

### Hello world

<table> <tr><th>variables.cpp</th> <th>variables.md</th></tr><tr><td>

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