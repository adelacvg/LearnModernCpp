#include<iostream>

struct Rectangle
{
    double length = 1.0;
    double width = 1.0;
};

int main()
{
    Rectangle x{2.0,2.0};
    std::cout<<x.length<<' '<<x.width<<'\n';
    return 0;
}

