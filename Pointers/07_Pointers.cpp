#include <iostream>
using namespace std;

int main()
{
    int first = 5;
    int second = 15;
    int *ptr = &second;
    *ptr = 9;
    cout << first << " " << second << endl;
    return 0;
}