/*
    1
    2 2
    3 3 3
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<" :";
    cin>>n;
    cout<<"****************************While Loop*************************"<<endl;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

    cout<<"****************************For Loop*************************"<<endl;
    for(i=1;i<=n;i++)
    {
        int k;
        for(k=1;k<=i;k++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}