#include "iter.hpp"


int main( void ) {
int arr1[] = {1, 2, 3};
std::cout << arraySize(arr1) << "\n";
iter(arr1, arraySize(arr1), print<int>); // sizeof(arr1) / sizeof(*arr1)
double arr2[] = {1.3, 2.2, 3.1};
iter(arr2, arraySize(arr1), print<double>);
char arr3[] = {'a', 'b', 'c'};
iter(arr3, arraySize(arr1), print<char>);
return 0;
}
