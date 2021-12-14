//以分子/分母格式輸入，輸出最簡分數
#include<iostream>
#include<cmath>
#include<algorithm>
#include<numeric>
class Fraction{
    public:
    int m_n, m_d;    
};

Fraction input(){
    Fraction a;
    std::cin>>a.m_n>>a.m_d;
    return a;
}

void output(Fraction a){
    int k=std::__gcd(a.m_n, a.m_d);
    std::cout<<a.m_n/k<<"/"<<a.m_d/k;
}

int main(){
    while(std::cin){
        Fraction a=input();
        output(a);
    }
    return 0;
}