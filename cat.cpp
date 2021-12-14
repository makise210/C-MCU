#include<iostream>

class cat{
    public:
    char move;
};

cat input(){
    cat m;
    std::cin>>m.move;
    return m;
}

void output(cat m){
    std::cout<<"ฅ•ω•ฅ";
    if(m.move == 'w')std::cout<<"↑"<<std::endl;
    if(m.move == 's')std::cout<<"↓"<<std::endl;
    if(m.move == 'd')std::cout<<"→"<<std::endl;
    if(m.move == 'a')std::cout<<"←"<<std::endl;
    if(m.move == 'f')std::cout<<"σ弌弌弌弌弌弌弌弌弌弌弌弌弌弌弌弌弌弌弌弌⊃"<<std::endl;
}

int main(){
    while(std::cin){
        cat m=input();
        output(m);
    }
}