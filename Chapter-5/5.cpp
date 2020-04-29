/*
Write a function called hms_to_secs() that takes three int values—for hours, minutes,
and seconds—as arguments, and returns the equivalent time in seconds (type long ).
Create a program that exercises this function by repeatedly obtaining a time value in
hours, minutes, and seconds from the user (format 12:59:59), calling the function, and
displaying the value of seconds it returns.
*/

//author @Nishant

#include <iostream>
using namespace std;

float hms_to_secs(int , int, int);

int main(){
    char ch, temp;
    int hrs, mins, secs;
    do{
        cout << "Enter time (HH:MM:SS): ";
        cin >> hrs >> temp >> mins >> temp >> secs;
        float totalSec = hms_to_secs(hrs, mins, secs);
        cout << "Total seconds: " << totalSec << endl;

        cout << "Want to try again(y/n): ";
        cin >> ch;
    }while(ch == 'y');
    cout << "\nExit" endl;
    return 0;
}

float hms_to_secs(int hrs, int mins, int secs){
    float totalSecs = 3600 * hrs + 60 * mins + secs;
    return totalSecs;
}