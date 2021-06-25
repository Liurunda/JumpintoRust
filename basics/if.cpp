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