#include <iostream>

using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows for the pyramid: ";
    cin >> rows;

    for(int i = 1, k = 0; i <= rows; ++i, k = 0) {
        for(int space = 1; space <= rows-i; ++space) {
            cout << "  ";
        }

        while(k != 2*i-1) {
            cout <<k;// << " ";
            ++k;
        }
        cout << endl;
    }

    return 0;
}

