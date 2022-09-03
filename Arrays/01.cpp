//check whether n is present in array of m or not
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
int main()
{
    int n, size, flag = 0;
    cout << "Input Number" << endl;
    cin >> n;
    cout << "Enter size of array:";
    cin >> size;
    int arr[size];
    cout << "Enter array elements:";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    printArray(arr, size);
    for (int i = 0; i < size; i++)
    {
        if (n == arr[i])
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}