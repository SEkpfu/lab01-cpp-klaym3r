#include <cmath>
#include <iostream>

using namespace std;

int main() {

  float x;
  cin >> x;

  if (x <= 0)
    cout << (x * x * x - 5.0) / (x - 1) << endl;
  else if (x <= 7)
    cout << 74.0 / 7 << endl;
  else
    cout << sqrt(x * x + 1);
}
