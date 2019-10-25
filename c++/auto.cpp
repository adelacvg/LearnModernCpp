#include<iostream>

//int add(int x, int y);//traditional function declaration
//auto add(int x, int y)->int;//trailing return syntax in c++11
auto add(int x, int y);
auto add(int x, int y)->auto;

int main()
{
    auto d = 5.0;
    auto i{1+2};//Type inference

    return 0;
}

auto add(int x, int y)//type inference for functions in c++14
{
    return x+y;
}
