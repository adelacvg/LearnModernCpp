#include<iostream>
#include<string>
#include<cstring>

int main()
{
    std::string s("string");
    std::cout<<s.max_size()<<std::endl;
    std::cout<<s.size()<<std::endl;
    std::string s1{"01234567"};
    std::cout<<s1.length()<<std::endl;
    std::cout<<s1.capacity()<<std::endl;
    s1.reserve(200);
    std::cout << "Length: " << s1.length() << std::endl;
    std::cout << "Capacity: " << s1.capacity() << std::endl;
    std::cout<<strlen(s1.c_str())<<std::endl;
    /* 
    char *s2 = "01234567";
    if(std::memcmp(s1.data(),s2,s1.size())==0)
        std::cout<<"The strings are equal\n";
    else
        std::cout<<"strings are not equal\n";
    */
    std::string s3;
    s3.assign(s1,2,4);
    std::cout<<s3<<std::endl;

    s3.assign(4,'g');
    std::cout<<s3<<std::endl;
    s3.insert(2, s1, 3,4);
    std::cout<<s3<<std::endl;
    return 0;
}
