#include <iostream>
using namespace std;

int sum (int a, int b) {
  cout << (a + b) << endl;
  return a+b;
}

double sum (double a, double b) {
  cout << (a + b) << endl;
  return a+b;
}

int sum (int a, int b, int c) {
  cout << (a + b + c) << endl;
  return a+b+c;
}

int main () {
  sum (5,4);
  sum (1.5, 2.5);
  sum (1,3,5);
  return 0;
}
