/*
Write a function that takes two Distance values as arguments and returns the larger one.
Include a main() program that accepts two Distance values from the user, compares
them, and displays the larger. (See the RETSTRC program for hints.)
*/

//author @Nishant

#include <iostream>
using namespace std;

struct Distance{
    int feet;
    float inches;
};

Distance bigD(Distance, Distance);
void display(Distance);

int main(){
    Distance d1, d2, d3;
    cout << "\nEnter feet: ";
    cin >> d1.feet;
    cout << "Enter inches: ";
    cin >> d1.inches;
    cout << "\nEnter feet: ";
    cin >> d2.feet;
    cout << "Enter inches: ";
    cin >> d2.inches;

    d3 = bigD(d1, d2);

    cout << endl << "d1 = ";
    display(d1);
    cout << endl << "d2 = ";
    display(d2);
    cout << endl << "Largest is ";
    display(d3);
    cout << endl;
    return 0;
}

Distance bigD(Distance d1, Distance d2){
    if(d1.feet > d2.feet)
        return d1;
    if(d1.feet < d2.feet)
        return d2;
    if(d1.inches > d2.inches) 
        return d1;
    else
        return d2;
}
void display( Distance d ){
    cout << d.feet << "\'-" << d.inches << "\"";
}