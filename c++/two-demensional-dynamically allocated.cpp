	
auto array = new int[10][5];// If the right-most array dimension is a compile-time constant

int **array = new int*[10]; // allocate an array of 10 int pointers — these are our rows
for (int count = 0; count < 10; ++count)
    array[count] = new int[5]; // these are our columns




for (int count = 0; count < 10; ++count)
    delete[] array[count];
delete[] array; // this needs to be done last
