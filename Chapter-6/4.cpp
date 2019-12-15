/*
Program to create an employee class and alows the user to set data for three employees.
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