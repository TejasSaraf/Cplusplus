#include <iostream>
#include <queue>
using namespace std;

int main()
{
    deque<int> d;
    d.push_front(1);
    d.push_back(2);

    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_back();
    cout << d.front() << endl;

    d.pop_front();
    cout << d.back() << endl;

    d.push_front(5);
    cout << d.front();
    return 0;
}