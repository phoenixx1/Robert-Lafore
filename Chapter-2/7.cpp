/*You can convert temperature from degrees Celsius to degrees Fahrenheit by multiplying
by 9/5 and adding 32. Write a program that allows the user to enter a floating-point num-
ber representing degrees Celsius, and then displays the corresponding degrees
Fahrenheit.*/

#include<iostream>

using namespace std;

int main(){
	float celcius, fahrenheit;
	cout << "Enter temperatur in Celcius: ";
	cin >> celcius;
	fahrenheit = (celcius * 9 / 5) + 32;
	cout << celcius << "C is equivalent to " << fahrenheit << "F" << endl;
	return 0;
}
