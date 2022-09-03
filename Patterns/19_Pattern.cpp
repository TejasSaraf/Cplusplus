/*
    * * * *
    * * *
    * *
    * 
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<" :";
    cin>>n;
    int i=n;
    while(i>0)
    {
        int j=i;
        while(j>0)
        {
            cout<<"*"<<" ";
            j--;
        }
        cout<<endl;
        i--;
    }
    return 0;
}