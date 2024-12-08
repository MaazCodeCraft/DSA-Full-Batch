#include <iostream>
using namespace std;

int main ()
{
  int num;
  cout << "Enter a Number:  ";
  cin >> num;

  int temp = 0;

  for (int i = 1; i <= num; i++)
  {
    if (num % i == 0)
    {
      temp ++;
    }
  }
  if (temp == 2)
  {
    cout << num << " is Prime Number.\n";
  }else {
    cout << num << " is not prime number.\n";
  }
  
  return 0;
}