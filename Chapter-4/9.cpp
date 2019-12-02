/*
Create a structure called time . Its three members, all type int , should be called hours , minutes , and seconds . Write a program that prompts the user to enter a time value in hours, minutes, and seconds. This can be in 12:59:59 format, or each number can be entered at a separate prompt (“Enter hours:”, and so forth). The program should then store the time in a variable of type struct time , and finally print out the total number of
seconds represented by this time value.
*/

//author @Nishant

#include<iostream>

using namespace std;

struct timee{
    int hours, mins, secs;
};

int main(){
    timee time1;
    char temp;
    cout << "Enter time in format (HH:MM:SS): ";
    cin >> time1.hours >> temp >> time1.mins >> temp >> time1.secs;
    
    int total_secs = time1.hours * 3600 + time1.mins * 60 + time1.secs;
    cout << "Total seconds in " << time1.hours << ":" << time1.mins << ":" << time1.secs << " are: " << total_secs << endl;
    return 0;
}
