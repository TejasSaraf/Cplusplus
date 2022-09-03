#include <iostream>
using namespace std;

template <class T>
void Arrayprint(T arr[], T n)
{
    for (T i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << "I Am Templatize Array!" << endl;
}

void Arrayprint(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl;
    cout << "I Am Function Array!" << endl;
}

int main()
{

    int size = 4;
    int arr[size];
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    Arrayprint(arr, size);
    return 0;
}