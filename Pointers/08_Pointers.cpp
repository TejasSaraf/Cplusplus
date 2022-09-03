#include <iostream>
using namespace std;

int main()
{
    int first = 7;
    int *p = &first;
    int *q = p;
    (*q)++;
    (*p)++;
    cout << first << endl;
    return 0;
}