#include<iostream>
#include<cassert>

int main()
{
    int a{3};

    assert(a<=5);//run on run time

    static_assert(sizeof(int)==4,"int must be 4 bytes");//run on compile time
    //static_assert(sizeof(long)==8,"long must be 8 bytes");//error long is 6 bytes
    static_assert(sizeof(long long)==8,"long long must be 8 bytes");

    //static_assert(a==3,"a must be 3");//false because a is not const

    return 0;
}
