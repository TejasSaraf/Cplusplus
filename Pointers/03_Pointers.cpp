//array pointers
#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 1, 3, 4, 5};
    int *ptr = &arr[0];

    cout << "Address of array:" << arr << endl;
    cout << "Address of arr[0]:" << &arr[0] << endl;
    cout << "Address of arr[1]:" << &1 [arr] << endl;
    cout << "Address of arr[2]:" << &arr[2] << endl;

    cout << "Address of pointer:" << ptr << endl;
    cout << "Value at pointer:" << *ptr << endl;
    *ptr = *ptr + 1;
    cout << "Value at pointer:" << *ptr << endl;
    ptr = &arr[2];
    *ptr = *ptr + 2;
    cout << "Value at pointer:" << *ptr << endl;

    return 0;
}