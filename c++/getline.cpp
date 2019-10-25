#include<iostream>
#include<string>
#include<limits>

int main()
{
    std::cout<<"Enter your full name: ";
    std::string name;
    std::getline(std::cin,name);

    std::cout<<"your name is "<<name<<'\n';
    int choice{0};
    std::cout<<"Pick 1 or 2: ";
    std::cin>>choice;

    std::cin.ignore(32767,'\n');
    //Equal to std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::string statement;
    std::cout<<"Now enter some statement: ";
    std::getline(std::cin,statement);
    std::cout<<"The statement you just cin is: "<<statement;
    return 0;
}
