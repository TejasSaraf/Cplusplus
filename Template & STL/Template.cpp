#include <iostream>
using namespace std;

template <class T1, class T2>
class Addition
{
public:
    T1 a;
    T2 b;
    Addition(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void setdata()
    {
        cout << a + b << endl;
    }
};
int main()
{
    Addition<int, float> obj(2, 2.2);
    obj.setdata();
    return 0;
}