/*
Implement the location measurement in ocean navigation
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