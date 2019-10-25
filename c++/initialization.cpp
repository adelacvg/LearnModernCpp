#include<iostream>
int main()
{
    //copy initialization
    int x=1;
    //direct initialization
    int y(1);
    //uniform initialization
    int z{1};
    int a{};
    std::cout<<x<<" "<<y<<" "<<z<<" "<<a<<'\n';
    return 0;
}
