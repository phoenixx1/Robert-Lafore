/*
class to model time data
*/

// author @Nishant

#include<iostream>

using namespace std;

class timee{
    private:
        int hrs, mins, secs;
    public:
        timee() : hrs(0), mins(0), secs(0){ }
        timee(int h, int m, int s){
            hrs = h;
            mins = m;
            secs = s;
        }
        void display() const{
            cout << hrs << ":" << mins << ":" << secs << endl;
        }
        void add_time(timee t1, timee t2){
            secs = t1.secs + t2.secs;
            if( secs > 59 ){
                secs -= 60; 
                mins++; 
            }
            mins += t1.mins + t2.mins;
            if( mins > 59 ){
                mins -= 60; 
                hrs++; 
            }
            hrs += t1.hrs + t2.hrs;
        }
};

int main(){
    const timee t1(2, 49, 30);
    const timee t2(3, 20, 15);
    timee t3;

    t3.add_time(t1, t2);

    cout << "Sum of: " << endl;
    t1.display();
    t2.display();
    cout << "is: ";
    t3.display();
    return 0;
}