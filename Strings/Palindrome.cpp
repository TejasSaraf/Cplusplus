#include <iostream>
using namespace std;

char lowercase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        int temp = ch - 'A' + 'a';
        return temp;
    }
}
int palindrome(char name[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        if (lowercase(name[start]) != lowercase(name[end]))
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return 1;
}

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
    cout << "Enter String:";
    cin >> name;
    int len = length(name);
    cout << "Palindrome or Not:" << palindrome(name, len);

    return 0;
}