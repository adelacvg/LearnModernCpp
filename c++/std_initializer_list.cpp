#include<iostream>
#include<initializer_list>
#include<cassert>

class IntArray
{
    private:
        int m_length{};
        int *m_data{};
    public:
        IntArray()
        {
        }

        IntArray(int length):
            m_length(length)
    {
        m_data = new int[length];
    }

        IntArray(const std::initializer_list<int> &list)://allow list initialization
            IntArray(static_cast<int>(list.size()))//use delegating constructor to set up initial array
    {
        int count=0;
        for(auto &element :list)
        {
            m_data[count] = element;
            ++count;
        }
    }

        ~IntArray()
        {
            delete[] m_data;
        }

        IntArray(const IntArray&) = delete;//avoid shallow copies
        IntArray& operator=(const IntArray& list) = delete;//avoid shallow copies
        int& operator[](int index)
        {
            assert(index>=0&&index<m_length);
            return m_data[index];
        }

        int getlength(){return m_length;};
};

int main()
{
    IntArray array{5,4,3,2,1};
    for(int count=0;count<array.getlength();++count)
        std::cout<<array[count]<<' ';
    return 0;
}

