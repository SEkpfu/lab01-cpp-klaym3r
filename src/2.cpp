#include <iostream>

using namespace std;

int main() {

  int a, b, c;
  cin >> a >> b >> c;
  int sum = a + b + c;

  (sum * sum) % 2 == 0 ? (cout << (a > c ? c : a) << endl)
                       : (cout << sum << " " << a * b * c << endl);
}
