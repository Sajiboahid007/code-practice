#include <iostream>
#include <string>
using namespace std;

int main() {
    string day;
    cout << "Enter the day of the week (e.g. Monday, Tuesday): ";
    getline(cin, day);

    // Convert the input to lowercase for ease of comparison
    for (int i = 0; i < day.length(); i++) {
        day[i] = tolower(day[i]);
    }

    // Use a switch statement to output a routine based on the day entered
    switch (day[0]) {
        case 'm':
            cout << "Monday routine: Work or school" << endl;
            break;
        case 't':
            if (day == "tuesday") {
                cout << "Tuesday routine: Exercise in the morning" << endl;
            } else if (day == "thursday") {
                cout << "Thursday routine: Work or school" << endl;
            } else {
                cout << "Invalid input. Please enter a valid day of the week (e.g. Monday, Tuesday)." << endl;
            }
            break;
        case 'w':
            cout << "Wednesday routine: Mid-week review and planning" << endl;
            break;
        case 'f':
            cout << "Friday routine: Relax and have fun!" << endl;
            break;
        case 's':
            if (day == "saturday") {
                cout << "Saturday routine: Household chores and errands" << endl;
            } else if (day == "sunday") {
                cout << "Sunday routine: Relax and prepare for the week ahead" << endl;
            } else {
                cout << "Invalid input. Please enter a valid day of the week (e.g. Monday, Tuesday)." << endl;
            }
            break;
        default:
            cout << "Invalid input. Please enter a valid day of the week (e.g. Monday, Tuesday)." << endl;
    }

    return 0;
}
