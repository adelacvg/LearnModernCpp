#include<iostream>
int main()
{
    double a{5.2};
    std::cout<<int(a)<<'\n';//c like
    std::cout<<(int)a<<'\n';//c++ functional cast
    std::cout<<int{a}<<'\n';//c++11 functional cast
    return 0;
}
