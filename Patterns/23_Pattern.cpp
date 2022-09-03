/*
    1 2 3 4
      2 3 4
        3 4
          4
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
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}