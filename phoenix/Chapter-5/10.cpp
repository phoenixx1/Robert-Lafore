/*
Write a function that, when you call it, displays a message telling how many times it has
been called: “I have been called 3 times”, for instance. Write a main() program that calls
this function at least 10 times. Try implementing this function in two different ways.
First, use a global variable to store the count. Second, use a local static variable. Which
is more appropriate? Why can’t you use a local variable?
*/

//author @Nishant

#include <iostream>
using namespace std;

int count=0;

void globalVar();
int localVar();

int main(){
    for(int i=0; i<10; i++){
        globalVar();
    }
    for(int j=0; j<5; j++){
        localVar();
    }
    int lCount = localVar();
    cout << "Using global variable count = " << count << endl;
    cout << "Using local variable count = " << lCount << endl;
    return 0;
}

void globalVar(){
    count++;
}

int localVar(){
    static int lCount = 0;
    lCount++;
    return lCount;
}