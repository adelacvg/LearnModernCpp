#include<iostream>

class Calc
{
    private:
        int m_value;
    public:
        Calc(){m_value=0;}

        Calc& add(int value){m_value+=value; return *this;}
        Calc& sub(int value){m_value-=value; return *this;}
        Calc& mul(int value){m_value*=value; return *this;}

        int getValue() {return m_value;}
};

int main()
{
    Calc calc;
    calc.add(5).sub(3).mul(4);

    std::cout<<calc.getValue()<<'\n';
    return 0;
}
