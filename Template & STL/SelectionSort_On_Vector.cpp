#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int midIndex = i;
        for (int j = i + 1; j < n - 1; j++)
        {
            if (arr[j] < arr[midIndex])
            {
                midIndex = j;
            }
        }
        swap(arr[midIndex], arr[i]);
    }
}

void printVector(vector<int> arr, int n)
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
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        arr.push_back(element);
    }
    printVector(arr, size);
    selectionSort(arr, size);
    printVector(arr, size);
}