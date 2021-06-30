/*
Create a structure called Volume that uses three variables of type Distance (from the
ENGLSTRC example) to model the volume of a room. Initialize a variable of type Volume
to specific dimensions, then calculate the volume it represents, and print out the result.
To calculate the volume, convert each dimension from a Distance variable to a variable
of type float representing feet and fractions of a foot, and then multiply the resulting
three numbers.
*/

// author @Nishant

#include<iostream>

using namespace std;

struct Distance{
	int feet;
	float inch;
};

struct Volume{
	Distance length, width, height;
};

int main(){
	float len, wid, hei;
	Volume room1 = {{13, 2.5}, {11, 5.5}, {5,2.5}};

	len = room1.length.feet+ room1.length.inch/12;
	wid = room1.width.feet+ room1.width.inch/12;
	hei = room1.height.feet+ room1.height.inch/12;
	
	cout << "Volume = " << len * wid * hei << " cubic feet" << endl;
	return 0;
}
