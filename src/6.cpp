#include <cmath>
#include <iostream>

using namespace std;

int main() {

  int n;
  cin >> n;
  float s = sin(1);

  for (int i = 2; i <= n; ++i)
    s += sin((1 + i) * i / 2.0);

  cout << s << endl;
}
