#include<iostream>
#include<bitset>

int main()
{
    std::bitset<8> bits{0b0000'0101};
    bits.set(3);//0b0000'1101
    bits.flip(4);//0b0001'1101
    bits.reset(4);//0b0000'1101
    std::cout<<bits<<'\n';
    return 0;
}
