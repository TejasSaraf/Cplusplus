/*
    1
    2 1
    3 2 1
    4 3 2 1
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "****************************While Loop****************************" << endl;
    int n;
    cout << " :";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;

        while (j <= i)
        {
            cout << (i - j + 1) << " ";

            j++;
        }
        cout << endl;
        i++;
    }

    cout << "****************************For Loop****************************" << endl;
    int row;
    for (row = 1; row <= n; row++)
    {
        int col;
        int val = row;
        for (col = 1; col <= row; col++)
        {
            cout << val << " ";
            val--;
        }
        cout << endl;
    }
    return 0;
}