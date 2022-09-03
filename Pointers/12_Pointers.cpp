#include <iostream>
using namespace std;

int main()
{
    float f = 2.5;
    float p = 1.5;
    float *ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout << *ptr << " " << f << " " << p << endl;
    return 0;
}