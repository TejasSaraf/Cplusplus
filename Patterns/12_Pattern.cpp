/*
    A A A
    B B B
    C C C
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "*****************************While Loop**************************" << endl;
    int n;
    cout << " :";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + i - 1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        // ch++;
        i++;
    }

    cout << "*****************************While Loop**************************" << endl;
    char c = 'A';
    int row;
    for (row = 1; row <= n; row++)
    {
        int col;
        for (col = 1; col <= n; col++)
        {
            cout << c << " ";
        }
        cout << endl;
        c++;
    }
    return 0;
}