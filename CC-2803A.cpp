//使用指標走訪印出資料
#include<iostream>
int main(){
    int a[10];
    for(int* p=a; p<a+10; ++p)std::cin>>*p;
    for(int* p=a; p<a+10; ++p){
        if(p!=a)std::cout<<",";
        std::cout<<*p;
    }
    return 0;
}