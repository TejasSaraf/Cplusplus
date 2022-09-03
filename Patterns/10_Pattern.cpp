/*
    1
    2 3
    3 4 5
    4 5 6 7
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "********************************While Loop*****************************" << endl;
    int n;
    cout << " :";
    cin >> n;
    int row = 1;

    while (row <= n)
    {
        int col = 1;
        int value = row;
        while (col <= row)
        {
            cout << value << " ";
            value++;
            col++;
        }
        cout << endl;

        row++;
    }

    cout << "********************************For Loop*****************************" << endl;

    int i = 1;
    for (i = 1; i <= n; i++)
    {
        int j;
        int val = i;
        for (j = 1; j <= i; j++)
        {
            cout << val << " ";
            val++;
        }
        cout << endl;
    }
}