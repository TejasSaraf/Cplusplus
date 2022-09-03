/*
    A
    B C
    C D E
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

    char ch = 'A';
    while (i <= n)
    {
        int j = 1;
        char c = ch;
        while (j <= i)
        {
            cout << c << " ";
            c++;
            j++;
        }
        cout << endl;
        ch++;
        i++;
    }
    return 0;
}