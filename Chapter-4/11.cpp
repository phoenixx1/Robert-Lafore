/*
Use the time structure from Exercise 9, and write a program that obtains two time values from the user in 12:59:59 format, stores them in struct time variables, converts each one to seconds (type int ), adds these quantities, converts the result back to hours-minutes-seconds, stores the result in a time structure, and finally displays the result in 12:59:59 format.
*/

//author @Nishant

#include<iostream>

using namespace std;

struct timee{
    int hours, mins, secs;
};

int main(){
    timee time1, time2, time3;
    char temp;
    
    cout << "Enter first time in format (HH:MM:SS): ";
    cin >> time1.hours >> temp >> time1.mins >> temp >> time1.secs;
    cout << "Enter second time in format (HH:MM:SS): ";
    cin >> time2.hours >> temp >> time2.mins >> temp >> time2.secs;

    int total_secs1 = time1.hours * 3600 + time1.mins * 60 + time1.secs;
    int total_secs2 = time2.hours * 3600 + time2.mins * 60 + time2.secs;

    int total_secs = total_secs1 + total_secs2;

    time3.hours = total_secs/3600;
    time3.mins = time3.hours%3600;
    time3.secs = total_secs%60;

    cout << "Addition of above input time is: " << time3.hours << ":" << time3.mins << ":" << time3.secs << endl;

    return 0;
}