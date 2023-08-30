#include <iostream>
#include <string>
using namespace std;

class Routine {
public:
    void display() {
        string day;
        cout << "Enter your day: ";
        getline(cin, day);

        switch (hash(day)) {
            case hash("sunday"):
                cout << "Enjoy your weekend!" << endl;
                break;
            default:
                cout << "Not a valid day." << endl;
                break;
        }
    }
};

int main() {
    Routine x;
    x.display();
    return 0;
}
