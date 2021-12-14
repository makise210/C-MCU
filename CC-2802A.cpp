//宣告並初始化char int float陣列，把這些陣列名稱送入cout
#include<iostream>
int main(){
    char cs[4]={'A','B','C',0};
    int is[4]={1,2,3,4};
    float fs[4]={1.1, 2.2, 3.3, 4.4};
    char* p=cs; int* q=is; float* r=fs;
    std::cout<<" "<<cs<<" "<<p<<std::endl
             <<" "<<is<<" "<<q<<std::endl
             <<" "<<fs<<" "<<r<<std::endl
             <<cs[0]<<*cs<<" "<<*p<<std::endl
             <<is[0]<<*cs<<" "<<*q<<std::endl
             <<fs[0]<<*fs<<" "<<*r <<std::endl;
    return 0;
}