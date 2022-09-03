#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<int> v;
    cout << "Capacity:" << v.capacity() << endl;

    v.push_back(1);
    cout << "capacity:" << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity:" << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity:" << v.capacity() << endl;

    cout << "Size:" << v.size() << endl;

    cout << "Element at index 2:" << v.at(2) << endl;
    cout << "Back element:" << v.back() << endl;
    cout << "Front element:" << v.front() << endl;

    vector<int>::iterator index = v.begin();
    v.insert(index + 3, 4);
    v.insert(index + 4, 5);
    cout << "Vector v:";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> v2(v);
    cout << "Vector v2:";
    for (int i : v2)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
