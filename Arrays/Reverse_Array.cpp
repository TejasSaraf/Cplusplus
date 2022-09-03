//write a program to reverse the array
#include <iostream>
using namespace std;

void reverse(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size / 2; i++)
    {
        // temp = arr[i];
        // arr[i] = arr[size - i - 1];
        // arr[size - i - 1] = temp;
        swap(arr[i],arr[size-i-1]);
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
}

int main()
{
    int size;
    cout << "Enter size of Array:";
    cin >> size;
    int arr[size];
    cout << "Enter array elements:";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    reverse(arr, size);

    return 0;
}