/*
    1
    1 2
    1 2 3
    1 2 3 4
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "***********************While Loop***************************" << endl;
    int n;
    cout << " :";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    cout << "***********************For Loop***************************" << endl;
    for (i = 1; i <= n; i++)
    {
        int k;
        for (k = 1; k <= i; k++)
        {
            cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}