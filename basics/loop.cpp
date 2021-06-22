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