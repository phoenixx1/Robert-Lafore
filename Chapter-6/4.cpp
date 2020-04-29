/*
Create an employee class, basing it on Exercise 4 of Chapter 4. The member data should
comprise an int for storing the employee number and a float for storing the employee’s
compensation. Member functions should allow the user to enter this data and display it.
Write a main() that allows the user to enter data for three employees and display it.
*/

// author @Nishant

#include<iostream>

using namespace std;

class employee {
	private:
		int emp_num;
        float emp_comp;
	public:
		employee(): emp_num(0), emp_comp(0)	{	}
		employee(int empNum, float empCom): emp_num(empNum), emp_comp(empCom){	}
		void setData();	
		void display() const;
};

void employee::setData() {	
	cout << "\nEnter employee Number: ";
	cin >> emp_num;
	cout << "Enter employee Compensation: ";
	cin >> emp_comp;
	cout << endl;
}

void employee::display() const {
	cout << "Employee Number: " << emp_num << endl;
	cout << "Employee Compensation: $" << emp_comp <<endl;
}

int main() {
	employee emp1, emp2;	
	employee emp3(12, 34.6);

	emp1.setData();	
	emp2.setData();	

	cout << "\nDetails of first employee: \n";
	emp1.display();	
	cout << "\nDetails of second employee: \n";
	emp2.display();	
	cout <<"\nDetails of third employee: \n";
	emp3.display();

	cout <<endl;
	return 0;
}