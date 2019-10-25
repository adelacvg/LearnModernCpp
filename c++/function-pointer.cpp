#include<iostream>
#include<functional>

int foo(int a)
{
    return a;
}

int main()
{
    //std::cout<<reinterpret_cast<void*>(foo);
    std::cout<<foo<<'\n';

    typedef int (*foofcn)(int);

    using validateFcn = int(*)(int); // type alias
    validateFcn fcnPtrPre = foo;
    std::cout<<fcnPtrPre(3)<<'\n';

    std::function<int(int)> fcnPtr11 = foo; 
    std::cout<<fcnPtr11(6)<<'\n';

    int (*fcnPtr)(int) = foo;
    std::cout<<fcnPtr<<'\n';

    auto fcnPtrAuto = foo;
    std::cout<<fcnPtrAuto(7);

    return 0;
}
