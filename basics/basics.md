　比较一些简单程序的C++版本和rust版本，从而了解rust的基本语法，并简单介绍一些语义的不同

### Hello world


<table>
<tr>
<th>hello.cpp</th>
<th>hello.md</th>
</tr>
<tr>
<td>

```c++
#include<cstdio>
int main(){
    printf("Hello, world!\n");
    return 0;
}
```
</td>
<td>

```rust
fn main(){
    println!{"Hello,world!"};
}
```
</td>
</tr>
</table>


