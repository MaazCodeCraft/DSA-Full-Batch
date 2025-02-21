#include <iostream>
using namespace std;

int reverseNum (int num) {
  int reversed = 0;
  int n = num;
  while (n > 0)
  {
    int lastDigit = n %10;
    reversed = reversed * 10 + lastDigit;
    n /= 10;
  }
  return reversed;
}

bool isPalindrom (int n) {
  return n == reverseNum (n);
}

int main () {
  int n;
  cout << "Enter a Number : ";
  cin >> n;

  if (isPalindrom (n)){
    cout << n << " is Palindrom number.\n";
  } else {
    cout << n << " is not Palindrom number.\n";
  }
  return 0;
}