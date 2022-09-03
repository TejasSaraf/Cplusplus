/*
    A
    B C
    D E F
    G H I J
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " :";
    cin >> n;
    int i = 1;
    char ch = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
}