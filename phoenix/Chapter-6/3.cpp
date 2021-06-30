/*
Create a class called time that has separate int member data for hours, minutes, and
seconds. One constructor should initialize this data to 0, and another should initialize it
to fixed values. Another member function should display it, in 11:59:59 format. The final
member function should add two objects of type time passed as arguments.
A main() program should create two initialized time objects (should they be const ?) and
one that isn’t initialized. Then it should add the two initialized values together, leaving the
result in the third time variable. Finally it should display the value of this third variable.
Make appropriate member functions const .
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