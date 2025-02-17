#include <iostream>
using namespace std;

int factorial (int n) {
  int fact = 1;
  for (int i = 1; i <= n; i++){
    fact *= i;
  }
  return fact;
}

int bioCoff (int n, int r) {
  int val1 = factorial (n);
  int val2 = factorial (r);
  int val3 = factorial (n-r);
  int result = val1 / (val2 * val3);

  return result;
}

int main () {
  int n, r;
  cout << "Enter Total Choice : ";
  cin >> n;
  cout << "Enter Total Pick Choice : ";
  cin >> r;
  
  cout << "Binomial Coefficient: " << bioCoff(n, r) << endl;
  return 0;
}