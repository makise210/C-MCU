#include<iostream>

class CKC{
    public:
    std::string m_name;
    int m_height;
};

CKC input(){
    CKC c;
    std::cin>>c.m_name>>c.m_height;
    return c;
}

void output(CKC c){
    std::cout<<c.m_name<<"是智障"<<std::endl;
    std::cout<<"身高"<<c.m_height<<"公分"<<std::endl;
    std::cout<<"CKC是小矮人"<<std::endl;
}

int main(){
    int n;
    std::cin>>n;
    while (n--)
    {
        CKC a=input();
        output(a);
    }
}