#include <iostream>
using namespace std;

int main()
{
    int arr[] = {11, 21, 13, 14};
    cout << *(arr) << " " << *(arr + 1) << " " << *(arr + 2) << endl;
    return 0;
}