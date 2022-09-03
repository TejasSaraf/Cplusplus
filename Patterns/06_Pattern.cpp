/*
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "****************************While loop***********************" << endl;
    int n;
    cout << " :";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    cout << "****************************For loop***********************" << endl;
    for (i = 1; i <= n; i++)
    {
        int k;
        for (k = 1; k <= n; k++)
        {
            cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}