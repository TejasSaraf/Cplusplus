//size of pointers
#include <iostream>
using namespace std;

int main()
{
    int val = 5;
    int *ptr = &val;

    cout << "Size of int:" << sizeof(val) << endl;
    cout << "Size of integer pointer address:" << sizeof(ptr) << endl;
    cout << "Size of integer pointer address:" << sizeof(&val) << endl;
    cout << "Size of integer pointer:" << sizeof(*ptr) << endl;

    char a = 'A';
    char *ch = &a;
    cout << "Size of character:" << sizeof(a) << endl;
    cout << "Size of character pointer address:" << sizeof(ch) << endl;
    cout << "Size of character pointer address:" << sizeof(&a) << endl;
    cout << "Size of character pointer:" << sizeof(*ch) << endl;

    unsigned x = -34;
    unsigned *u = &x;
    cout << "Size of unsigned:" << sizeof(x) << endl;
    cout << "Size of unsigned pointer address:" << sizeof(u) << endl;
    cout << "Size of unsigned pointer address:" << sizeof(&x) << endl;
    cout << "Size of unsigned pointer:" << sizeof(*u) << endl;

    double z = 2323;
    double *d = &z;
    cout << "Size of double:" << sizeof(z) << endl;
    cout << "Size of double pointer address:" << sizeof(d) << endl;
    cout << "Size of double pointer address:" << sizeof(&z) << endl;
    cout << "Size of double pointer:" << sizeof(*d) << endl;

    return 0;
}