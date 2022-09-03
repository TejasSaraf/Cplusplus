//character pointer
#include <iostream>
using namespace std;

int main()
{
    char ch[10] = "abcd";
    char *ptr = &ch[0];

    cout << "Address of ch:" << ptr << endl;
    cout << "Address of ch:" << &ch << endl;
    cout << "Value of ch:" << *ptr << endl;
    cout << "Value of ch:" << ch << endl;
    return 0;
}