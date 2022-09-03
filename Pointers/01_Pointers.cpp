#include <iostream>
using namespace std;

int main()
{
    int val = 5;
    int *ptr = &val;

    cout << "Address :" << ptr << endl;
    cout << "Address :" << &val << endl;
    cout << "Value at address:" << *ptr << endl;
    cout << "Value at address:" << (*ptr) << endl;

    *ptr = *ptr + 2;
    cout << *ptr << endl;

    *ptr = (*ptr) + 2;
    cout << *ptr << endl; // 9

    // *ptr++;
    // cout<<*ptr<<endl;

    *ptr = *(ptr + 2);
    cout << *ptr << endl;
}