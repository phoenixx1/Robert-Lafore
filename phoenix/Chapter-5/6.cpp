/*
Start with the program from Exercise 11 in Chapter 4, “Structures,” which adds two
struct time values. Keep the same functionality, but modify the program so that it uses
two functions. The first, time_to_secs() , takes as its only argument a structure of type time ,
and returns the equivalent in seconds (type long ). The second function,
takes as its only argument a time in seconds (type long ), and returns a
structure of type time .
*/

//author @Nishant

#include <iostream>
using namespace std;

struct timee {
	int hours, minutes, seconds;
};

long time_to_secs(timee);
timee secs_to_time(long);

int main(){
    timee time1, time2;
    char temp;
    long secTime;
    
    cout << "Enter hours: ";
    cin >> time1.hours;
    
    cout << "Enter minutes: ";
    cin >> time1.minutes; 
    
    cout << "Enter seconds: ";
    cin >> time1.seconds;

    cout << "Equivalent in seconds: " << time_to_secs(time1) << endl;

    cout << endl << "Enter time in seconds: ";
    cin >> secTime;

    time2 = secs_to_time(secTime);

    cout << "Equivalent in HH:MM:SS format: " << time2.hours << ":" << time2.minutes << ":" << time2.seconds << endl;

    return 0;
}

long time_to_secs(timee time1) {
	return time1.hours*3600 + time1.minutes*60 + time1.seconds;
}

timee secs_to_time(long tt) {
	int hh, mm, ss;
	timee time2;
	mm = tt/60;
	ss = tt%60;
	hh = mm/60;
	mm = mm%60;

	time2.hours = hh;
	time2.minutes = mm;
	time2.seconds = ss;

	return time2;
}