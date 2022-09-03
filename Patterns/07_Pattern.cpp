/*
    3 2 1
    3 2 1
    3 2 1
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "*****************************While loop************************" << endl;
    int n;
    cout << " :";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = n;
        while (j > 0)
        {
            cout << j << " ";
            j--;
        }
        cout << endl;
        i++;
    }

    cout << "*****************************For loop************************" << endl;
    for (i = 1; i <= n; i++)
    {
        int k;
        for (k = n; k > 0; k--)
        {
            cout << k << " ";
        }
        cout << endl;
    }
}