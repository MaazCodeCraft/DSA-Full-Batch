#include <iostream>
using namespace std;

bool isPrime (int n) {
  if (n == 1) {
    return false;
  }
  for (int i = 2; i*i <= n; i++){
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

void allPrimeNumber (int n) {
  for (int i = 2; i <= n; i++){
    if (isPrime (i)){
      cout << i << " ";
    }
  }
  cout << endl;
}

int sumOfAllPrime (int n){
  int sum = 0;
  for (int i = 2; i <= n; i++){
    if (isPrime (i)){
      sum += i;
    }
  }
  return sum;
}

int main () {
  int n; 
  cout << "Enter a Number : ";
  cin >> n;

  cout << "All Prime Numbers upto " << n << ": "; 
  allPrimeNumber (n);

  cout << "Sum of all Prime Numbers upto " << n << ": " << sumOfAllPrime (n);
 
  return 0;
}