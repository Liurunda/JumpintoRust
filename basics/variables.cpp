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