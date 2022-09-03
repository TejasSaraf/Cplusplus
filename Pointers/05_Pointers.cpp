#include <iostream>
using namespace std;

void print(int *ptr)
{
    ptr = ptr + 1;
}

void update(int *ptr)
{
    *ptr = *ptr + 1;
}

int main()
{
    int val = 5;
    int *ptr = &val;

    cout << ptr << endl;
    print(ptr);
    cout << ptr << endl;

    cout << *ptr << endl;
    update(ptr);
    cout << *ptr << endl;

    return 0;
}