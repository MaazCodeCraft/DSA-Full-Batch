#include <iostream>
using namespace std;

bool isArmstrong (int num) {
  int cubeSum = 0;
  int n = num;
  while (n > 0) {
    int lastDigit = n % 10;
    cubeSum += lastDigit * lastDigit * lastDigit;
    n /= 10;
  }
  return num == cubeSum;
}

int main () {
  int num;
  cout << "Enter a Number : ";
  cin >> num;

  if (isArmstrong (num)) {
    cout << num << " is Armstrong Number.\n";
  } else {
    cout << num << " is not Armstrong Number.\n";
  }
  
  return 0;
}