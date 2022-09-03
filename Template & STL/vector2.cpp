#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

void printVector(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    cout << endl;
}

int main()
{
    vector<int> v1;
    int size, element;
    cout << "Enter size of Array:";
    cin >> size;
    cout << "Enter elements in vector:";
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        v1.push_back(element);
    }
    printVector(v1);
    vector<int>::iterator ite = v1.begin();
    v1.insert(ite + 5, 2, 6);
    printVector(v1);
    v1.pop_back();
    printVector(v1);
    return 0;
}