#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> &v){
    for(int i=0;i<4;i++){
        cout<<v[i];
    }
}
int main()
{
    vector<int> v1;
    int element;
    cout<<"Enter elements:"<<endl;
    for(int i=0;i<4;i++){
        cin>>element;
        v1.push_back(element);
    }
    printArray(v1);
    return 0;
}