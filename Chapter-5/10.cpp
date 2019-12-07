/*
Demonstrate global variable and local static variable.
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