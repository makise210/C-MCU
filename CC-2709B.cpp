//設定一字串，轉成大寫
#include<iostream>
#include<string.h>
#include<ctype.h>
int main(){
    int i=0;
    char s[1024]="ckc-asshole";
    int n=strlen(s);
    while (n--){
        s[i]=toupper(s[i]);
        std::cout<<s[i];
        ++i;
    }
    return 0;
}