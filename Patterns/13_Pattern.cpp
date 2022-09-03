/*
    A B C
    A B C
    A B C
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "**************************While Loop******************************" << endl;
    int n;
    cout << " :";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char ch = 'A';
        while (j <= n)
        {
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }

    cout << "**************************While Loop******************************" << endl;
    int row;
    for (row = 1; row <= n; row++)
    {
        int col;
        char c = 'A';
        for (col = 1; col <= n; col++)
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
    return 0;
}