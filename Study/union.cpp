#include <iostream>
using namespace std;

union Data {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    Data myData;

    myData.intValue = 42;
    cout << "Integer value: " << myData.intValue << endl;

    myData.floatValue = 3.14;
    cout << "Float value: " << myData.floatValue << endl;

    myData.charValue = 'A';
    cout << "Character value: " << myData.charValue << endl;

    // Since all members share the same memory, changing one member affects the others
    cout << "After changing charValue: "<<endl;
    cout << "Integer value: " << myData.intValue << endl;
    cout << "Float value: " << myData.floatValue << endl;

    return 0;
}
