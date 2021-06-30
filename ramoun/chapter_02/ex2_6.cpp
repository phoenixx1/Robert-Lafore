// ex2_6.cpp
// money exchange
#include <iostream>

using namespace std;

int main() {
    // pnd = 1.487 dlr
    // frc = 0.172 dlr
    // mrk = 0.584 dlr
    // yen = 0.00955 dlr
    
    // i/p: amoutn in $
    // o/p: value in 4 currencies
    
    float dlr,
          frc,
          pnd,
          mrk,
          yen;

    cout << "enter amoutn in $: ";
    cin >> dlr;
    
    pnd = dlr / 1.487;
    frc = dlr / 0.172;
    mrk = dlr / 0.584;
    yen = dlr / 0.00955;
    
    cout << "amount in pound: " << pnd <<endl
         << "amount in frank: " << frc <<endl
         << "amount in  mark: " << mrk <<endl
         << "amount in   yen: " << yen <<endl;
    return 0;
}



