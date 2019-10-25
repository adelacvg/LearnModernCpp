#include<iostream>
#include<bitset>
int main()
{
    int bin{};
    bin = 0x10;
    std::cout<<bin<<'\n';
    std::cout<<std::hex<<bin<<'\n';
    bin = 0b11;
    std::cout<<bin<<'\n';
    std::bitset<8> bin1{0b1100'0101};
    std::cout<<bin1<<'\n';
    std::cout<<std::bitset<4>(0b1010)<<'\n';
    return 0;
}
