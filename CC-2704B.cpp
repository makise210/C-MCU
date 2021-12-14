//輸入字串以及該字串逆轉後的樣子
#include<iostream>
#include<string.h>
int main(){
    char s[1024];std::cin>>s;
    int n = strlen(s);
    std::cout<<s<<std::endl;
    while(n--){
        std::cout<<s[n];
    }
    return 0;
}