#include <iostream>
using namespace std;

int main()
{
    int first = 100;
    int *p = &first;
    int **q = &p;
    int second = (**q)++ + 9;
    cout << first << " " << second << endl;
    return 0;
}