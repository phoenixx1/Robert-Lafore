/*
Repeat Exercise 8, but instead of two int variables, have the swap() function inter-
change two struct time values (see Exercise 6).
*/

//author @Nishant

#include <iostream>
using namespace std;

struct timee{
    int hours, mins, secs;
};

void swap(timee&, timee&);

int main(){
    timee time1, time2;
    cout << "Values for Time-1" << endl;
    cout << "Enter hours: ";
    cin >> time1.hours;
    
    cout << "Enter minutes: ";
    cin >> time1.mins; 
    
    cout << "Enter seconds: ";
    cin >> time1.secs;

    cout << "Values for Time-2" << endl;
    cout << "Enter hours: ";
    cin >> time2.hours;
    
    cout << "Enter minutes: ";
    cin >> time2.mins; 
    
    cout << "Enter seconds: ";
    cin >> time2.secs;

    swap(time1, time2);
    cout << "After swap:" << endl;
    cout << "Equivalent in HH:MM:SS format\nTime-1: " << time1.hours << ":" << time1.mins << ":" << time1.secs << "\nTime-2: " << time2.hours << ":" << time2.mins << ":" << time2.secs << endl;
    return 0;
}

void swap(timee& time1, timee& time2){
    time1.hours = time1.hours+time2.hours;
    time2.hours = time1.hours-time2.hours;
    time1.hours = time1.hours-time2.hours;

    time1.mins = time1.mins+time2.mins;
    time2.mins = time1.mins-time2.mins;
    time1.mins = time1.mins-time2.mins;
    
    time1.secs = time1.secs+time2.secs;
    time2.secs = time1.secs-time2.secs;
    time1.secs = time1.secs-time2.secs;
}