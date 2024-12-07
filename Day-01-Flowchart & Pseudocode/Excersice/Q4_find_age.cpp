#include <iostream>
using namespace std;

int main ()
{
  int age;
  cout << "Enter Your age:  ";
  cin >> age;

  if (age > 18)
  {
    cout << "Congratulation, Your eligible for driving license.\n";
  }else {
    cout << "Sorry! Your not eligible for driving license.\n";
  }
  
  return 0;
}