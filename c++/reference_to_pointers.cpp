#include<iostream>

void foo(int *&ptr)
{
    ptr =nullptr;
}

int main()
{
    int x=5;
    int *ptr = &x;
    std::cout<<"ptr is: "<<(ptr? "non-null" : "null")<<'\n';
    foo(ptr);
    std::cout<<"ptr is: "<<(ptr? "non-null" : "null")<<'\n';
    return 0;
}
