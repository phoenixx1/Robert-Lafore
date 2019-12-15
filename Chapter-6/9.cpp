/*
Fraction addition using class and object concepts
*/

// author @Nishant

#include<iostream>

using namespace std;

class addF{
    int num, den;
    public:
        void getData();
        void addFraction(addF, addF);
        void display();
};

void addF::getData(){
    char temp;
	cin >> num >> temp >> den;
}

void addF::addFraction(addF f1, addF f2){
    num = f1.num * f2.den + f1.den * f2.num;
	den = f1.den * f2.den;
}

void addF::display(){
    cout << "Sum is: " << num << "/" << den << endl;
}

int main(){
    char choice;
    addF f1, f2, f3;
    do{
        cout << "Enter first fraction in p/q: ";
        f1.getData();
        cout << "Enter second fraction in p/q: ";
        f2.getData();
        f3.addFraction(f1, f2);
        f3.display();
        cout << "Do you want to continue (y/n): ";
        cin >> choice;
    }while(choice == 'y' || choice == 'Y');
    cout << endl;
    return 0;
}