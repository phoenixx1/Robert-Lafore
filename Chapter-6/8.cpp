/*
Assign a serial number to objects and show the assigned serial number
*/

// author @Nishant

#include <iostream>

using namespace std;

class serailCount{
	private:
		static int count;	
		unsigned int serialNumber;
	public:
		serailCount() {
			count++;
			serialNumber = count;
		}
		void display() const;
};

int serailCount::count = 0;	

void serailCount::display() const { 
	cout << "I am object number " << serialNumber << endl;
}

int main() {
	serailCount obj1, obj2, obj3;
	obj1.display();
	obj2.display();
	obj3.display();
	return 0;
}