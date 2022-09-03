#include <iostream>
using namespace std;

int main()
{
    int first = 10;
    int second = 11;
    int *third = &second;
    first = *third;
    *third = *third + 2;
    cout << first << " " << second << endl;
    return 0;
}