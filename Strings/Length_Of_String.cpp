#include <iostream>
using namespace std;

int length(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout << "Enter Your name:";
    cin >> name;

    cout << "Your name is ";
    cout << name << endl;

    int len = length(name);
    cout << "Length:" << len << endl;

    return 0;
}