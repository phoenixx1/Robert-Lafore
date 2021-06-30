/*
In ocean navigation, locations are measured in degrees and minutes of latitude and longi-
tude. Thus if you’re lying off the mouth of Papeete Harbor in Tahiti, your location is 149
degrees 34.8 minutes west longitude, and 17 degrees 31.5 minutes south latitude. This is written as 149°34.8 ’ W, 17°31.5 ’ S. There are 60 minutes in a degree. (An older system
also divided a minute into 60 seconds, but the modern approach is to use decimal minutes
instead.) Longitude is measured from 0 to 180 degrees, east or west from Greenwich,
England, to the international dateline in the Pacific. Latitude is measured from 0 to 90
degrees, north or south from the equator to the poles.
Create a class angle that includes three member variables: an int for degrees, a float
for minutes, and a char for the direction letter (N, S, E, or W). This class can hold either
a latitude variable or a longitude variable. Write one member function to obtain an angle
value (in degrees and minutes) and a direction from the user, and a second to display the
angle value in 179°59.9 ’ E format. Also write a three-argument constructor. Write a
main() program that displays an angle initialized with the constructor, and then, within a
loop, allows the user to input any angle value, and then displays the value. You can use
the hex character constant ‘\xF8’ , which usually prints a degree (°) symbol.
*/

// author @Nishant

#include<iostream>

using namespace std;

class angle{
    int degrees;
    float minutes;
    char direction;
    public:
        angle():degrees(0), minutes(0), direction(0) {	}
		angle(int deg, float min, char dir):degrees(deg), minutes(min), direction(dir) {	}

        void getData(int, float, char);
        void display() const;
};

void angle::getData(int dgr, float mnt, char dir){
    degrees = dgr;
    minutes = mnt;
    direction = dir;
}

void angle::display() const{
    cout << "Angle: " << degrees << "\xF8 " << minutes << "\' " << direction;
    if(direction == 'E' || direction == 'e' || direction == 'W' || direction == 'w') {
		cout << " Longitude !";
	} if(direction == 'N' || direction == 'n' || direction == 'S' || direction == 's') {
		cout << " Latitude !";
	}
}

int main(){
    int degr;
	float mint;
	char drct, choice;
	cout << endl;
	angle angle1(146, 34.6, 'S');
	angle1.display();	
	cout << endl;
	angle angle2;

	do {
		cout << "\nEnter the degree: ";
		cin >> degr;
		cout << "Enter the minutes: ";
		cin >> mint;
		cout << "Enter the direction(N, S, E, W): ";
		cin >> drct;

		angle2.getData(degr, mint, drct);
		angle2.display();

		cout << "\nDo you want to enter another angle for navigation (Y, N): ";
		cin >> choice;
	} while(choice == 'Y' || choice == 'y' );
	cout << endl;
    return 0;
}