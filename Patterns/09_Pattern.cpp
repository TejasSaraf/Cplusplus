/*
    1
    2 3
    4 5 6
    7 8 9 10
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "************************While Loop*************************" << endl;
    int n;
    cout << " :"
         << " ";
    cin >> n;
    int row = 1;
    int count = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << count << " ";
            count++;
            col++;
        }
        cout << endl;
        row++;
    }

    cout << "************************For Loop*************************" << endl;
    int i = 1;
    int flag = 1;
    for (i = 1; i <= n; i++)
    {
        int j = 1;
        for (j = 1; j <= i; j++)
        {
            cout << flag << " ";
            flag++;
        }
        cout << endl;
    }
}