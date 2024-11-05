#include <iostream>

using namespace std;

int main() {

  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    int x, y;
    cin >> x >> y;

    if (x >= 0 && y >= 0) {
      if (x * x + y * y <= 36)
        cout << "YES" << endl;
    } else if (x < 0 && y > 0) {
      if (y <= 2 * x + 6)
        cout << "YES" << endl;
    } else if (x < 0 && y < 0) {
      if (y >= -(2 * x + 6))
        cout << "YES" << endl;
    } else if (x > 0 && y < 0) {
      if (y >= -6 + x)
        cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}
