#include<iostream>
#include<iomanip>
#include<string>
int main()
{
    /*********cin**************
    char buf[10];
    std::cin>>std::setw(10)>>buf;
    std::cout<<buf<<std::endl;
    std::cin.get(buf,8);
    std::cout<<buf<<std::endl;
    std::cin.getline(buf,12);
    std::cout<<buf<<std::endl;
    std::cin.getline(buf,12);
    std::cout<<buf<<std::endl;
    std::cout<<std::cin.gcount()<<std::endl;
    std::string s;
    std::getline(std::cin,s);
    std::cout<<s<<std::endl;
    */
    /****************cout*******************/
    std::cout.setf(std::ios::showpos|std::ios::uppercase);
    std::cout<<27<<'\n';
    std::cout.unsetf(std::ios::showpos);
    std::cout<<"abc"<<'\n';
    /*
    std::cout.unsetf(std::ios::dec);//must turn off dec before hex can be used
    std::cout.setf(std::ios::hex);
    std::cout<<27<<'\n';
    */
    std::cout.setf(std::ios::hex,std::ios::basefield);//the other way to turn on hex
    std::cout<<27<<'\n';
    std::cout.setf(std::ios::boolalpha);
    std::cout<<true<<'\n';

    return 0;
}
