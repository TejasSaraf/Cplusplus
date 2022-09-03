// Double pointers or pointer-to-pointer

#include <iostream>
using namespace std;

int main()
{
    int first = 5;
    int *ptr = &first;
    int **ptr1 = &ptr;
    cout << "Address of ptr:" << &ptr << endl;
    cout << "Address of ptr:" << ptr1 << endl;

    cout << "Address of first:" << &first << endl;
    cout << "Address of first:" << ptr << endl;
    cout << "Address of first:" << *ptr1 << endl;
    return 0;
}