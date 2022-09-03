/*
    1 2 3
    4 5 6
    7 8 9
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "*************************While loop************************" << endl;
    int n;
    cout << " :";
    cin >> n;
    int i = 1;
    int count = 1;
    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }

    cout << "*************************For loop************************" << endl;
    int flag = 1;
    for (i = 1; i <= n; i++)
    {
        int k;
        for (k = 1; k <= n; k++)
        {
            cout << flag << " ";
            flag++;
        }
        cout << endl;
    }
    return 0;
}