/*
Refer to the CIRCAREA program in Chapter 2, “C++ Programming Basics.” Write a func-
tion called circarea() that finds the area of a circle in a similar way. It should take an
argument of type float and return an argument of the same type. Write a main() func-
tion that gets a radius value from the user, calls circarea() , and displays the result.
*/

//author @Nishant 

#include<iostream>

using namespace std;

float circarea(float r){
    const float PI =  3.14159F;
    return PI * r * r;
}

int main(){
    double radius;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area is " << circarea(radius) << endl;
    return 0;
}
