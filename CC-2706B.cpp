//輸入一字串s、整數k，移除字串s第k位
#include<iostream>
#include<string.h>
int main(){
    char s[1024];int k;
    std::cin>>s>>k;
    int n = strlen(s);
    for(int i=k-1;i<n;i++){
        s[i]=s[i+1];
    }
    std::cout<<s<<std::endl;
    return 0;
}