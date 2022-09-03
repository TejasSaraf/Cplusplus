// Find the minimum and maximum element in an array
#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}

void Min(int arr[], int size)
{
    int min;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            min = arr[i];
            break;
        }
    }
    cout << "Min=" << min << endl;
}

void Max(int arr[], int size)
{
    int max;
    for (int i = 0; i < size; i++)
    {
        if (arr[i + 1] > arr[i])
        {
            max = arr[i];
        }
    }
    cout << "Max=" << max;
}

int main()
{
    int size;
    cout << "Enter Array size:";
    cin >> size;
    int arr[size];
    cout << "Enter array elements:";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    printArray(arr, size);
    Min(arr, size);
    Max(arr, size);
    return 0;
}