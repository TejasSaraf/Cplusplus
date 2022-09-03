#include<iostream>
using namespace std;

void reverseWords(string& s)
{
    
    int start=0;
    int end=s.size()-1;
    while(start<end)
    {
        
        swap(s[start++],s[end--]);
        
        
  
    }
}
void print(string s)
{
    for(int i=0;i<s.length();i++)
    {
        cout<<s[i];
    }
    cout<<endl;
}
int main()
{
    string s="This is a string";
    print(s);
    reverseWords(s);
    print(s);
    return 0;
}