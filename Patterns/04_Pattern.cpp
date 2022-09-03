/*
 *
 * *
 * * *
 * * * *
 */

#include <iostream>
using namespace std;

int main()
{
    cout << "***********************While Loop*************************" << endl;
    int n;
    cout << " :";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "*"
                 << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    cout << "***********************For Loop*************************" << endl;
    for (i = 1; i <= n; i++)
    {
        int k;
        for (k = 1; k <= i; k++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }

    return 0;
}