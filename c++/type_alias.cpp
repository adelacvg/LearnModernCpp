#include<iostream>

#define integer32_t int//define expression substitution
typedef double distance_t; //typedef keyword alias
using distance_t = double; //using alias = keyword

int main()
{
    integer32_t abc{};
    std::cout<<"abc :"<<abc<<'\n';
    return 0;
}
