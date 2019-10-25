#include<iostream>
#include<array>
#include<algorithm>

int main()
{
    std::array<int, 5> myArray{7,3,1,8,5};

     std::sort(myArray.begin(), myArray.end()); // sort the array forwards
//    std::sort(myArray.rbegin(), myArray.rend()); // sort the array backwards
    /*for (const auto &element : myArray)
        std::cout << element << ' ';*/
    /*using index_t = std::array<int, 5>::size_type;
    for(index_t i{0}; i<myArray.size();++i)
        std::cout<<myArray[i]<<' ';*/

     for (std::size_t i{ 0 }; i < myArray.size(); ++i)
        std::cout << myArray[i] << ' ';

    return 0;
}
