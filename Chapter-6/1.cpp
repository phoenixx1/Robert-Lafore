/*
Create a class that imitates part of the functionality of the basic data type int . Call the
class Int (note different capitalization). The only data in this class is an int variable.
Include member functions to initialize an Int to 0, to initialize it to an int value, to dis-
play it (it looks just like an int ), and to add two Int values.
Write a program that exercises this class by creating one uninitialized and two initialized
Int values, adding the two initialized values and placing the response in the uninitialized
value, and then displaying this result.
*/

// author @Nishant

#include<iostream>

using namespace std;

class Int{
    private:
    int i;
    public:
    Int(){
        i = 0;
    }
    Int(int i1){
        i = i1;
    }
    void add(Int i2, Int i3){
        i = i2.i + i3.i;
    }
    void display(){
        cout << i << endl;
    }
};

int main(){
    Int i1(2);
    Int i2(7);
    Int i3;

    i3.add(i1, i2);
    i3.display();
    return 0;
}
