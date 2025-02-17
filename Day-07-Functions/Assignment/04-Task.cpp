#include <iostream>
using namespace std;

bool prime (int n) {
  if (n == 1){
    return false;
  }
  for (int i = 2; i*i <= n; i++){
    if (n % i == 0){
      return false;
    }
  }
  return true;
}

int main () {
  int num;
  cout << "Enter a Number : ";
  cin >> num;
  cout << prime (num) << endl;
  return 0;
}