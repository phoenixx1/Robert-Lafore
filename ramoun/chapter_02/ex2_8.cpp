// ex2_8.cpp
// demonstrates setw & setfill manipulators

#include <iostream>
#include <iomanip> // for setw

using namespace std;

int main()
    {
    long pop1=2425785, pop2=47, pop3=9761;

    cout << setw(8) << "LOCATION" << setw(12)<< "POPULATION" << endl
    << setw(8) << "Portcity" << setfill('.') <<setw(12) << pop1 << endl
    << setw(8) << "Hightown" << setw(12) << pop2 << endl
    << setw(8) << "Lowville" << setw(12) << pop3 << endl;
    return 0;
    }



