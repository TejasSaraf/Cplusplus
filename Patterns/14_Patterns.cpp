
/*
    A
    B B
    C C C
*/
#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    int i = 1;
    char ch = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << ch << " ";
            j++;
        }
        cout << endl;
        ch++;
        i++;
    }
    return 0;
}