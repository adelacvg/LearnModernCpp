#include<iostream>

class Something
{
    private:
        int m_value1;
        double m_value2;
        char m_value3;
        const int m_array[5];

    public:
        Something(int value1,double value2,char value3='c')
            : m_value1(value1), 
            m_value2(value2), 
            m_value3(value3),
            m_array{1,2,3,4,5}
    {
    }

};

class A
{
    public:
        A(int x){std::cout<<"A"<<x<<'\n';}
};

class B
{
    private:
        A m_a;
    public:
        B(int y)
            : m_a(y-1)
        {
            std::cout<<"B"<<y<<'\n';
        }
};

int main()
{
    Something something(1,3.0,'b');

    return 0;
}
