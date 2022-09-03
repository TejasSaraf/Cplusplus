/*
    A B C D
    B C D E
    C D E F
    D E F G
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " :";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + i - j;
        while (j <= n)
        {
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
}