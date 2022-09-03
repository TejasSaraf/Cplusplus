/*
    * * * *
      * * *
        * *
          *
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
        int space = 1;
        while (space < i)
        {
            cout << " "
                 << " ";
            space++;
        }
        int j = i;
        while (j <= n)
        {
            cout << "*"
                 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}