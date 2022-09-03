#include <iostream>
using namespace std;

int main()
{
    int arr[3] = {3, 2, 1};
    int sum=0;
    for (int i = 0; i < 3; i++)
    {
        sum += arr[i];
    }
    cout << sum << endl;
    return 0;
}