#include<iostream>
int add(int , int);
int main()
{
    int x{add(1,2)};
    std::cout<<x;
}
int add(int a,int b)
{
    return a+b;
}
