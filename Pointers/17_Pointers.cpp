#include <iostream>
using namespace std;

int main()
{
    char arr[] = "abcde";
    char *p = &arr[0];
    p++;
    // p--;
    cout << p << endl;
    return 0;
}