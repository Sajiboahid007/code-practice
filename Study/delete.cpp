#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Datainfo
{
public:
    string name, address, dep;
    int id, number;

    void getdata()
    {
        cin.ignore();
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter Address: ";
        getline(cin, address);
        cout << "Enter Department: ";
        getline(cin, dep);
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter the number: ";
        cin >> number;
    }

    void DisplayData()
    {
        cout << "---------------------------------------------------" << endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Department: " << dep << endl;
        cout << "ID: " << id << endl;
        cout << "Number: " << number << endl;
    }
};

vector<Datainfo> store;

void AddData()
{
    Datainfo x;
    x.getdata();
    store.push_back(x);
}

void DisplayAllData()
{
    for (int i = 0; i < store.size(); i++)
    {
        Datainfo y = store[i];
        y.DisplayData();
    }
}

void DeleteData(int id)
{
    for (int i = 0; i < store.size(); i++)
    {
        if (store[i].id == id)
        {
            store.erase(store.begin() + i);
            cout << "Data with ID " << id << " has been deleted." << endl;
            return;
        }
    }

    cout << "Data with ID " << id << " not found." << endl;
}

int main()
{
    int carry;
    cout << "Enter the number of persons: ";
    cin >> carry;

    for (int i = 1; i <= carry; i++)
    {
        cout << "Enter data for person " << i << ":" << endl;
        AddData();
    }

    cout << "\nDisplaying all data:\n" << endl;
    DisplayAllData();

    cout << "\n";
    getchar();

    int choice;
    cout << "1. Delete data" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        int deleteId;
        cout << "Enter the ID of the data you want to delete: ";
        cin >> deleteId;
        DeleteData(deleteId);
        cout << "\nDisplaying updated data:\n" << endl;
        DisplayAllData();
    }
    else
    {
        cout << "Exiting program." << endl;
    }

    return 0;
}

