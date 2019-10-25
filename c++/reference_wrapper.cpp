#include<vector>
#include<iostream>
#include<functional>
class Base
{
protected:
    int m_value;
 
public:
    Base(int value)
        : m_value(value)
    {
    }
 
    virtual const char* getName() const { return "Base"; }
    int getValue() const { return m_value; }
};
 
class Derived: public Base
{
public:
    Derived(int value)
        : Base(value)
    {
    }
 
    virtual const char* getName() const { return "Derived"; }
};
int main()
{
    std::vector<std::reference_wrapper<Base> > v;
    Base b(5);
    Derived d(6);
    v.push_back(b);
    v.push_back(d);

    for(int count =0 ;count<v.size();++count)
        std::cout<<"I am a "<<v[count].get().getName()<<" with value "<<v[count].get().getValue()<<'\n';

    return 0;
}
