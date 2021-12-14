//宣告10元素的int array, 印出每個元素的信箱號碼
#include<iostream>
int main(){
    int a[10];
    for(int i=0;i<10;i++){
        std::cout<<(void*)&a[i]<<std::endl;
    }
    return 0;
}