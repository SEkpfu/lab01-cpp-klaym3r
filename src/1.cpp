#include <iostream>
#include <cmath>

using namespace std;

int main(){

  float d, h;
  cin >> d >> h;
  float r = d / 2;

  cout << (2 * M_PI * r * r + 2 * M_PI * r * h) << endl;

}
