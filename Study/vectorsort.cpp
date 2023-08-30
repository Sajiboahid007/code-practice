#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int student;
    cout << "Enter size: ";
    cin >> student;
    vector<int> store;
    cout << "Enter the values of the array:" << endl;
    for (int i = 0; i < student; i++)
    {
        int x;
        cin >> x;
        store.push_back(x);
    }
    cout << "--------------------------------------" << endl;
    cout << "Elements of array:" << endl;
    for (int i = 0; i < store.size(); i++)
    {
        cout << store[i] << endl;
    }
    int position, value;
    cout << "Enter the position: ";
    cin >> position;
    cout << "Enter the value: ";
    cin >> value;
    store.insert(store.begin() + position, value);
    cout << "--------Final array is-----------" << endl;
    for (int i = 0; i < store.size(); i++)
    {
        cout << store[i] << endl;
    }
}

