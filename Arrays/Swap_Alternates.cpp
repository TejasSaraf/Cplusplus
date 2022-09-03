#include <iostream>
using namespace std;

void swapAlternates(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size; i = i + 2)
    {
        if (arr[i + 1] <= size)
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int size;
    cout << "Enter array size:";
    cin >> size;
    int arr[size];
    cout << "Enter array elements:";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    printArray(arr, size);
    swapAlternates(arr, size);
    printArray(arr, size);
}