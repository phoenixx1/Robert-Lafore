/*
Create a class called ship that incorporates a ship’s number and location. Use the
approach of Exercise 8 to number each ship object as it is created. Use two variables of
the angle class from Exercise 7 to represent the ship’s latitude and longitude. A member
function of the ship class should get a position from the user and store it in the object;
another should report the serial number and position. Write a main() program that cre-
ates three ships, asks the user to input the position of each, and then displays each ship’s
number and position.
*/

// author @Nishant

#include<iostream>

using namespace std;

class angle{
    int degrees;
    float minutes;
    char direction;
    public:
        void getAngle();
        void dispAngle() const;
};

class ship {
    private:
		angle latitude, longitude;
		static int count;
		unsigned int shipNumber;
	public:
		ship() {	
			count++;
			shipNumber = count;
		}
		void getPosition();	
		void display() const; 
};

int ship::count = 0;	//defination of count

void angle::getAngle(){
    cout << "\nEnter degrees: ";
	cin >> degrees;
	cout << "Enter minutes: ";
	cin >> minutes;
	cout << "Enter directions(E, W, N, S): ";
	cin >> direction;
}

void ship::getPosition() {	
	cout << "\nEnter longitude of ship: ";
	longitude.getAngle();
	cout << "\nEnter latitude of ship: ";
	latitude.getAngle();
}

void ship::display() const{	
	cout << "Ship Serial Number: " << shipNumber << endl;
	longitude.dispAngle();
	cout << endl;
	latitude.dispAngle();
    cout << endl;
}

void angle::dispAngle() const{
	cout << degrees << "\xF8" << minutes << "\' " << direction;
	if(direction == 'E' || direction == 'e' || direction == 'W' || direction == 'w') {
		cout << " Longitude !";
	} if(direction == 'N' || direction == 'n' || direction == 'S' || direction == 's') {
		cout << " Latitude !";
	}
}

int main(){
    ship ship1, ship2, ship3;	
	cout <<"\nEnter first ship position: ";
	ship1.getPosition();	
	cout <<"\nEnter second ship position: ";
	ship2.getPosition();	
	cout <<"\nEnter third ship position: ";
	ship3.getPosition();

	cout <<"\nFirst Ship Position is: \n";
	ship1.display();	
	cout <<"\nSecond Ship Position is: \n";
	ship2.display();
	cout <<"\nThird Ship Position is: \n";
	ship3.display();	

    return 0;
}