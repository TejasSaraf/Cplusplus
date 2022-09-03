#include <iostream>
#include <vector>
using namespace std;

void Merge(vector<int> &arr, int mid, int low, int high)
{
    int i = low;
    int j = mid + 1;
    int B[100];
    int k = low;

    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            B[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            B[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = arr[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = B[i];
    }
}

void MergeSort(vector<int> &arr, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        MergeSort(arr, low, mid);
        MergeSort(arr, mid + 1, high);
        Merge(arr, mid, low, high);
    }
}

void printVector(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> arr;
    int size;
    cout << "Enter Vector Size";
    cin >> size;
    int element;
    cout << "Enter Vector Element";
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        arr.push_back(element);
    }
    printVector(arr, size);
    MergeSort(arr, 0, size - 1);
    printVector(arr, size);

    return 0;
}