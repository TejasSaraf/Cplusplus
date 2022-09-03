#include <iostream>
using namespace std;

void FindUniqueElement(int arr[], int element, int size)
{
    int count = 0;
    
    for (int i = 0; i < size; i++)
    {

        if (element == arr[i])
        {
            count++;
        }
    }
    if (count == 1)
    {
        cout << "Unique element found : " << element << endl;
    }
    else
    {
        cout << "Element is not Unique." << endl;
    }
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[7] = {1, 2, 2, 1, 3, 4, 3};
    int element;
    cout << "Enter Element:";
    cin >> element;
    printArray(arr,7);
    FindUniqueElement(arr, element, 7);
    return 0;
}