//Find the number of occurrences of n in an array
#include <iostream>
using namespace std;

void occurrence(int arr[], int size, int n)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (n == arr[i])
        {
            count++;
        }
    }
    cout << "Occurrences:" << count;
}

int main()
{
    int size, n;
    cout << "Enter Number:";
    cin >> n;
    cout << "Enter Array size:";
    cin >> size;
    int arr[size];
    cout << "Enter array elements:";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    occurrence(arr, size, n);
    return 0;
}