#include <iostream>
using namespace std;

int main() {
    int x = 200, y = 50, z = 100;
    if(x > y && y > z){
    cout << "Hello \n";
    }

    if(z > y && z < x){
    cout << "C++ \n";
    }
    if((y+200) < x && (y+150) < z){
    cout << "Hello C++ \n";
    }

    return 0;
}