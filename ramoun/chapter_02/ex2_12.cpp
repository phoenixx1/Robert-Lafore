// ex2_12.cpp
// decimal to old notation english money converter

#include <iostream>

using namespace std;

int main()
    {
    float dpounds;
    
    cout << "Enter Decimal: ";
    cin >> dpounds;
    
    int pounds = static_cast<int>(dpounds);
    float remainder = dpounds - pounds;
    
    float dshillings = remainder * 20;
    int shillings = static_cast<int>(dshillings);
    remainder = dshillings - shillings;
    
    float dpence = remainder * 12;
    int pence = static_cast<int>(dpence);
    
    cout << pounds << '.' << shillings << '.' << pence;
    return 0;
    }

