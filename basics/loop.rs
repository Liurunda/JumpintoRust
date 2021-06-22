fn main(){
    let mut countdown = 10;
    while countdown!=0{
        countdown -= 1;
        println!("{}",countdown);
    }
    let A:[i32;5] = [1,2,3,4,5];
    for a in A.iter(){
        println!("{}",a);
    }
    for i in(0..7){
        println!("{}",i);
    }
}