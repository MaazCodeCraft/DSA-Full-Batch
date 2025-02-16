#include <iostream>
using namespace std;

int sum (int a, int b){
  int sum = a + b;
  return sum;
}

int diff (int a, int b){
  int diff = a - b;
  return diff;
}

int main () {
  int s = sum (11, 40); // 11, 40 are aurguments
  cout << "SUM = " << s << endl;

  int d = diff (11, 40); // 11, 40 are aurguments
  cout << "DIFF = " << d << endl;
  return 0;
}
