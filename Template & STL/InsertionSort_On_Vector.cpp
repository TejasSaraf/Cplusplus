#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr, int n)
{
    int i, j;
    for (i = 1; i < n; i++)
    {
        int temp = arr[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
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
    cout << "Enter Vector size:";
    cin >> size;
    int element;
    cout << "Enter Vector element:";
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        arr.push_back(element);
    }
    printVector(arr, size);
    insertionSort(arr, size);
    printVector(arr, size);
}