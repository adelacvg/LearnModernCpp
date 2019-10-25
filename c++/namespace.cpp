#include<iostream>

namespace Foo
{
    namespace Goo
    {
        const int g_x =5;
    }
}

namespace Boo = Foo::Goo;

int main()
{
    std::cout<<Boo::g_x;
    return 0;
}
