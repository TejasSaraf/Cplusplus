#include <iostream>
using namespace std;

int main()
{
    int *p = 0;
    int first = 100;
    // *p=first; ->this is wrong it is a bad practice
    p = &first;
    cout << *p << endl;
    return 0;
}