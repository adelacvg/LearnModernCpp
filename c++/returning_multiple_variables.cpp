#include<iostream>
#include<tuple>

struct S
{
    int m_x;
    double m_y;
};

S returnStruct()
{
    S s;
    s.m_x=5;
    s.m_y=6.7;
    return s;
}

std::tuple<int,double> returnTuple()
{
    return std::make_tuple(5,6.7);
}

int main()
{
    S s1 = returnStruct();
    std::cout<<s1.m_x<<' '<<s1.m_y<<'\n';
    
    std::tuple<int, double> s = returnTuple();
    std::cout<<std::get<0>(s)<<' '<<std::get<1>(s)<<'\n';
     
    int a1;
    double b1;
    std::tie(a1,b1) = returnTuple();
    std::cout<<a1<<' '<<b1<<'\n';
     
    
    auto [a,b] = returnTuple();
    std::cout<<a<<' '<<b<<'\n';

    return 0;
}
