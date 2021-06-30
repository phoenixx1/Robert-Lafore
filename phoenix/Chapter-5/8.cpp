/*
Write a function called swap() that interchanges two int values passed to it by the call-
ing program. (Note that this function swaps the values of the variables in the calling pro-
gram, not those in the function.) You’ll need to decide how to pass the arguments. Create
a main() program to exercise the function
*/

//author @Nishant

#include <iostream>
using namespace std;

void swap(int&, int&);

int main(){
    int x, y;
    cout << "Enter 2 numbers to swap" << endl;
    cout << "X: ";
    cin >> x;
    cout << "Y: ";
    cin >> y;
    swap(x, y);
    cout << "After swap:" << endl;
    cout << "X: " << x << "\nY: " << y << endl;
    return 0;
}

void swap(int& x, int& y){
    x = x+y;
    y = x-y;
    x = x-y;
}