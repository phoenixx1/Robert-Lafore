// ex2_11.cpp
// left justify

#include <iostream>
#include <iomanip>

using namespace std;

int main()
    {
    cout << setiosflags(ios::left)
         << setw(12) << "Last name"
         << setw(13) << "First name"
         << setw(8)  << "Street"
         << setw(15)  << "address"
         << setw(12) << "Town"
         << setw(7)  << "State"
         << endl;
        
    cout << setfill('-')
         << setw(73) << ""
         << setfill(' ')
         << endl;
         
    cout << setw(12) << "Jones"
         << setw(13) << "Bernard"
         << setw(8)  << "1015"
         << setw(15)  << "Pine"
         << setw(12)  << "Lane"
         << setw(7)  << "Littletown MI"
         << endl;
         
    cout << setw(12) << "O’Brian"
         << setw(13) << "Coleen"
         << setw(8)  << "42 E."
         << setw(15)  << "1515th Ave."
         << setw(12)  << "Bigcity"
         << setw(7)  << "NY"
         << endl;
         
    cout << setw(12) << "Wong"
         << setw(13) << "Harry"
         << setw(8)  << "121-A"
         << setw(15)  << "Alabama St."
         << setw(12)  << "Lakeville"
         << setw(7)  << "IL"
         << endl;

    return 0;
    }



