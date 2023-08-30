#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  // Read the two floating-point values
  double A, B;
  cin >> A >> B;

  // Calculate the average
  double average = (A + B) / 2;

  // Print the average
  cout << fixed << setprecision(5) << "AVG = " << average << endl;

  return 0;
}
