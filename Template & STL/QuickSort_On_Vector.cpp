#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }

    } while (i < j);
    swap(arr[j], arr[low]);

    return j;
}

void QuickSort(vector<int> &arr, int low, int high)
{
    int partitionIndex;
    if (low < high)
    {
        partitionIndex = partition(arr, low, high);
        QuickSort(arr, low, partitionIndex - 1);
        QuickSort(arr, partitionIndex + 1, high);
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
    cout << "Enter Vector Size:";
    cin >> size;
    int element;
    cout << "Enter Vector element:";
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        arr.push_back(element);
    }
    printVector(arr, size);
    QuickSort(arr, 0, size - 1);
    printVector(arr, size);

    return 0;
}