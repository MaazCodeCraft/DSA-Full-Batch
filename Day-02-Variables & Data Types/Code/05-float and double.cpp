#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    float PI = 3.141234567891011;
    double PI2 = 3.141234567891011;

    cout << setprecision (20) << "PI = " << PI << endl;
    cout << setprecision (20) << "PI2 = " << PI2<< endl;
    
    return 0;
}