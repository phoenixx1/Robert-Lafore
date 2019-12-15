/*
class to model an integer datatype
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
