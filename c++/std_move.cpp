#include<iostream>
#include<string>
#include<utility>
#include<vector>

template<class T>
void swap(T& a, T&b)
{
    T tmp {std::move(a)};
    a = std::move(b);
    b = std::move(tmp);
}

int main()
{
    std::string x{"abc"};
    std::string y{"de"};
    std::vector<int> v;
    
    std::cout<<"x: "<<x<<'\n';
    std::cout<<"y: "<<y<<'\n';

    swap(x, y);

    std::cout<<"x: "<<x<<'\n';
    std::cout<<"y: "<<y<<'\n';
    
    return 0;
}
