
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