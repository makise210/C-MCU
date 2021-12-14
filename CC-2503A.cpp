//輸入兩個點，輸出加、減、內積、距離
#include<iostream>
#include<cmath>

class Point{
    public:
    double m_x, m_y;
    Point(double a, double b){
        m_x=a;
        m_y=b;
    }
    Point Add(Point b){
        return Point(m_x+b.m_x, m_y+b.m_y);
    }
    Point Sub(Point b){
        return Point(m_x-b.m_x, m_y-b.m_y);
    }
    double Inp(Point b){
        Point& a=(*this);
        return a.m_x*b.m_x+a.m_y*b.m_y;
    }
    double Abs(){
        return sqrt(m_x*m_x+m_y*m_y);
    }
};
Point input(){
    int x,y; char c; std::cin>>c>>x>>c>>y>>c;
    return Point(x, y);
}
void output(Point a){
    std::cout<<"("<<a.m_x<<","<<a.m_y<<")";
}
int main(){
    Point a=input(), b=input();
    output(a.Add(b));
    std::cout<<std::endl;
    output(a.Sub(b));
    std::cout<<std::endl;
    std::cout<<a.Inp(b)<<std::endl;
    std::cout<<a.Sub(b).Abs()<<std::endl;
    return 0;
}



