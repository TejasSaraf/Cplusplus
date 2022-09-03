#include <iostream>
using namespace std;

void increment(int **p)
{
    ++(**p);
}

int main()
{
    int num = 100;
    int *ptr = &num;
    increment(&ptr);
    cout << num << endl;
    return 0;
}