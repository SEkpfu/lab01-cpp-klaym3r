#include <iostream>

using namespace std;

int main(){

  int n, num, count{}, sum{};
  bool flag = false;
  int mult = 1;

  cin >> n;

  for (int i = 0; i < n; ++i){

    cin >> num;

    if (num % 10 == 1 || num % 10 == 9){
      flag = true;
      mult *= num;
    }

    int temp = num;

    while (temp >= 10){
      if (temp == 22)
        ++count;
      if (temp == 10)
        sum += num;
      temp/=10;
    }
  }
  
  cout << "a) " << (flag ? mult : 0) << endl;
  cout << "b) " << count << endl;
  cout << "c) " << sum << endl;
}
