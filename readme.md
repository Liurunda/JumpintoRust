一个简易的教程，帮助对C++较为熟悉的程序员快速上手已有的Rust项目。

A simple tutorial for Rust beginners who are familiar with C++. Assume the reader will participate in an existing Rust project.

### 环境搭建

通过https://rustup.rs安装rust工具链（编译器，包管理器cargo）。

第一次安装时，一切选项按默认，一路回车即可。

后续如果需要其他工具链版本，可用rustup按需切换。也有项目通过`rust-toolchain.toml`设定工具链版本，免去手动切换的麻烦。

安装完毕后，重启终端，尝试cargo --version命令。如果无效，可能需要手动将cargo添加到PATH.

为了熟悉语法，可以新建一个main.rs, 在里面输入
```rust
fn main(){
  let a = 0xbeef;
	println!("hello world{:o}",a);//{:o} 在输出时被a以8进制替代。
}
```
然后执行`rustc main.rs`和`./main`,应当可以看到输出。然后就可以在`main.rs`里面实验你将要学到的语言特性。

rust的编译检查非常严格（调试rust程序时有一种自嘲的说法: fighting the compiler)，但rust给出的报错信息也非常丰富（相比C++）。

多关注编译器给出的错误和警告信息, 或者将编译错误信息/错误编号作为关键词进行搜索，能得到很多帮助。

### 推荐阅读

时间充裕时, 推荐完整阅读（或跳跃着阅读）：[官方入门指南（The Book）](https://doc.rust-lang.org/book/)，它包含了大部分基本的常见语法。

或者，阅读 [Rust by Examples](https://doc.rust-lang.org/rust-by-example/hello/print.html)中的大量例程。

或者，学习一份非常有趣的教程：https://rust-unofficial.github.io/too-many-lists/ 解决rust初学者面临的一大挑战“如何用rust写个链表”，同时理解rust的诸多核心机制。

成熟的项目通常已经有完善的编译脚本，如果你更想专注于语言本身，可以考虑第一次阅读时跳过关于cargo的部分，之后结合项目的编译脚本来理解cargo的用法。

如果你感觉基本语法不必花太多时间了解，至少仔细阅读第四章关于“所有权”的部分。然后可以在阅读代码时，哪里不懂搜哪里。

官方学习资源汇总：https://www.rust-lang.org/learn

标准库文档：https://doc.rust-lang.org/std/index.html （项目中如果用到不属于rust标准库的crate，可能无法在这里找到文档，需要Google一下）

### 本仓库的目录

basics 基本语法

rusty 一些比较rust的语法

buggy 一些奇奇怪怪的bug
