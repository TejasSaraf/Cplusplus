//Move all the negative elements to one side of array.
#include<iostream>
using namespace std;

void sort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}
int main()
{
    int size;
    cout<<"Enter size of array:";
    cin>>size;
    int arr[size];
    cout<<"Enter array elements:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    sort(arr,size);
    return 0;
}