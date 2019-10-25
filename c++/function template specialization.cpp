#include<iostream>

template<class T>
class Storage
{
    private:
        T m_value;
    public:
        Storage(T value)
        {
            m_value = value;
        }

        ~Storage()
        {
        }

        void print()
        {
            std::cout<<m_value<<'\n';
        }
};
template<>
void Storage<double>::print()
{
    std::cout<<std::scientific<<m_value<<'\n';
}
int main()
{
    Storage<int> nValue(5);
    Storage<double> dValue(6.7);

    nValue.print();
    dValue.print();
}
