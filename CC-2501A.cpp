//輸入一整數N跟N個X.Y座標，輸出此N個點
#include<iostream>

class Point{
    public:
    double m_x, m_y;
};

Point input(){
    Point a;
    std::cin>>a.m_x>>a.m_y;
    return a;
}
void output(Point a){
    std::cout<<"("<<a.m_x<<",";
    std::cout<<a.m_y<<")"<<std::endl;
}
int main(){
    while(std::cin){
        Point a=input();
        output(a);
    }
}