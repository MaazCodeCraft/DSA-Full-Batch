#include <iostream>
using namespace std;

int sum (int a, int b = 1){
  int sum = a + b;
  return sum;
}

int diff (int a, int b){
  int diff = a - b;
  return diff;
}

int main () {
  int s = sum (3, 5);
  cout << "Sum = " << s << endl;
  return 0;
}
