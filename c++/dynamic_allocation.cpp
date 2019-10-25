#include<iostream>

int main()
{
    int *value = new(std::nothrow) int;//value will be set to a nullptr if integer allocation fails
    int length;
    std::cin>>length;
    int *array = new(std::nothrow) int[length];
    //int *array = new(std::nothrow) int[3]{0,1,2};

 
    int fixedArray[] {1, 2, 3}; // okay: implicit array size for fixed arrays
     
    //int *dynamicArray1 = new int[] {1, 2, 3}; // not okay: implicit size for dynamic arrays
     
    int *dynamicArray2 = new int[3] {1, 2, 3}; // okay: explicit size for dynamic arrays


    delete value;
    delete[] array;
    value = nullptr;
    array = nullptr;
    return 0;
}
