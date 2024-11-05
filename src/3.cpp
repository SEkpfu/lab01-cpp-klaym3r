#include <iostream>

using namespace std;

int pow(int x, int y){

	if (y == 0)
		return 1;
	if (y % 2 == 0){
		int res = pow(x, y / 2);
		return res * res;
	}
	else
		return pow(x, y - 1) * x;
}

int main() {

  int x;
  cin >> x;

  int result = pow(x, 14) - pow(x, 5) + pow(x, 3) - 2;

  cout << result << endl;
}
