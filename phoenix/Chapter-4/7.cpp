/*
Write a program that first allows the user to specify a type by entering its first letter
( ‘l’ , ‘s’ , ‘m’ , and so on), then stores the type chosen as a value of a variable of type
enum etype , and finally displays the complete word
*/

//author @Nishant

#include<iostream>

using namespace std;

enum etype {laborer, secretary, manager, accountant, executive, researcher};

struct date {
	int month, day, year;
};

struct employee {
	int emp_num;
	float emp_compen;
	date mdy;
	etype emp_type;
};

int main(){
    employee emp1, emp2, emp3;
	char e_type;
    char temp;
	cout <<"\nEnter the first employee details: ";
	cout <<"\nEnter employee number: ";
	cin >>emp1.emp_num;
	cout <<"Enter employee compensation: ";
	cin >>emp1.emp_compen;
	cout <<"Enter employee type(l, s, m, a, e, r): ";
	cin >>e_type;

	switch(e_type) {
		case 'l':
	    	emp1.emp_type = laborer;
		    break;

		case 's':
		    emp1.emp_type = secretary;
		    break;

		case 'm':
		    emp1.emp_type = manager;
		    break;

		case 'a':
    		emp1.emp_type = accountant;
		    break;

    	case 'e':
	    	emp1.emp_type = executive;
		    break;

		case 'r':
		    emp1.emp_type = researcher;
    		break;

		default:
	    	cout <<"Invalid Input!";
	}

	cout <<"Enter date of first employment (MM/DD/YY): ";
	cin >>emp1.mdy.month >> temp >> emp1.mdy.day >> temp >> emp1.mdy.year;

	cout <<"\nEnter the second employee details: ";
	cout <<"\nEnter employee number: ";
	cin >>emp2.emp_num;
	cout <<"Enter employee compensation: ";
	cin >>emp2.emp_compen;
	cout <<"Enter employee type(l, s, m, a, e, r): ";
	cin >>e_type;

	switch(e_type) {
		case 'l':
            emp2.emp_type = laborer;
            break;

		case 's':
            emp2.emp_type = secretary;
            break;

		case 'm':
            emp2.emp_type = manager;
            break;

		case 'a':
            emp2.emp_type = accountant;
            break;

		case 'e':
            emp2.emp_type = executive;
            break;

		case 'r':
            emp2.emp_type = researcher;
            break;

		default:
    		cout <<"Invalid Input!";
	}
	cout <<"Enter date of first employment (MM/DD/YY): ";
	cin >>emp2.mdy.month >> temp >> emp2.mdy.day >> temp >> emp2.mdy.year;

	cout <<"\nEnter the third employee details: ";
	cout <<"\nEnter employee number: ";
	cin >>emp3.emp_num;
	cout <<"Enter employee compensation: ";
	cin >>emp3.emp_compen;
	cout <<"Enter employee type(l, s, m, a, e, r): ";
	cin >>e_type;

	switch(e_type) {
		case 'l':
            emp3.emp_type = laborer;
            break;

		case 's':
            emp3.emp_type = secretary;
            break;

		case 'm':
            emp3.emp_type = manager;
            break;

		case 'a':
            emp3.emp_type = accountant;
            break;

		case 'e':
            emp3.emp_type = executive;
            break;

		case 'r':
            emp3.emp_type = researcher;
            break;

		default:
    		cout <<"Invalid Input!";
	}
	cout <<"Enter date of first employment (MM/DD/YY): ";
	cin >>emp3.mdy.month >> temp >> emp3.mdy.day >> temp >> emp3.mdy.year;

	cout <<"\nDetails of first employee: ";
	cout <<"\nEmployee number: " <<emp1.emp_num;
	cout <<"\nEmployee compensation: " <<emp1.emp_compen;
	cout <<"\nEmployee type is: ";
	switch(emp1.emp_type) {
		case laborer:
            cout <<"Laborer";
            break;

		case secretary:
            cout <<"Secretary";
            break;

		case manager:
            cout <<"Manager";
            break;

		case accountant:
            cout <<"Accountant";
            break;

		case executive:
            cout <<"Executive";
            break;
        
        case researcher:
            cout <<"Researcher";
            break;

		default:
    		cout <<"No match found!";
	}

	cout <<"\nEmployee date of first employment: " <<emp1.mdy.month <<"/" <<emp1.mdy.day <<"/" <<emp1.mdy.year <<endl;

	cout <<"\nDetails of second employee: ";
	cout <<"\nEmployee number: " <<emp2.emp_num;
	cout <<"\nEmployee compensation: " <<emp2.emp_compen;
	cout <<"\nEmployee type is: ";
	switch(emp2.emp_type) {
		case laborer:
            cout <<"Laborer";
            break;

		case secretary:
            cout <<"Secretary";
            break;

		case manager:
            cout <<"Manager";
            break;

		case accountant:
            cout <<"Accountant";
            break;

		case executive:
            cout <<"Executive";
            break;

        case researcher:
            cout <<"Researcher";
            break;

		default:
    		cout <<"No match found!";
	}
	cout <<"\nEmployee date of first employment: " <<emp2.mdy.month <<"/" <<emp2.mdy.day <<"/" <<emp2.mdy.year <<endl;

	cout <<"\nDetails of first employee: ";
	cout <<"\nEmployee number: " <<emp3.emp_num;
	cout <<"\nEmployee compensation: " <<emp3.emp_compen;
	cout <<"\nEmployee type is: ";
	switch(emp3.emp_type) {
		case laborer:
            cout <<"Laborer";
            break;

		case secretary:
            cout <<"Secretary";
            break;

		case manager:
            cout <<"Manager";
            break;

		case accountant:
            cout <<"Accountant";
            break;

		case executive:
            cout <<"Executive";
            break;

        case researcher:
            cout <<"Researcher";
            break;

		default:
		cout <<"No match found!";
	}
	cout <<"\nEmployee date of first employment: " <<emp3.mdy.month <<"/" <<emp3.mdy.day <<"/" <<emp3.mdy.year <<endl;

	return 0;
}