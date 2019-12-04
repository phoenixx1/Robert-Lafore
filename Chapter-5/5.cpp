/*
Total Seconds
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