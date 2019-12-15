/*
multiplication table of a fraction.
*/

// author @Nishant

#include<iostream>
#include<iomanip>

using namespace std;

class calF{
    int num, den;
    public:
        calF(int n, int d): num(n), den(d) { }
        void mulF(calF, calF);
        void lowTerms();
        void setData(int n, int d){
            num = n;
            den = d;
        }
        void displayN(){
            cout << num << "/" << den;
        }
        void display(){
            cout << setw(7) << num << "/" << den;
        }
};

void calF::mulF(calF f1, calF f2){
    num = f1.num * f2.num;
    den = f1.den * f2.den;
}

void calF::lowTerms() {	
	long tnum, tden, temp, gcd;

	tnum = labs(num);	
	tden = labs(den);	

	if(tden == 0) {	
		cout <<"Illegal fraction: division by 0";
		exit(1);
	} else if (tnum == 0) {		
		num = 0; 
		den = 1;
		return;
	}
	
	while(tnum != 0) {
		if(tnum <tden) {	
			temp = tnum;	
			tnum = tden;
			tden = temp;	
		}
		tnum = tnum - tden;		
	}
	gcd = tden;		
	num = num/gcd;		
	den = den/gcd;
}

int main(){
    calF f(0, 0), f1(0, 0), f2(0, 0); int x;
    char ch;
	do{
		cout << "Enter a number : ";
        cin >> x; 
        cout << "   ";
		for(int i=1; i<x; i++){ 
            f.setData(i, x); 
            f.lowTerms(); 
            f.display();
        }
		for(int j=1; j<x; j++){
			cout<< endl; 
            f.setData(j, x); 
            f.lowTerms(); 
            f.displayN();
			for(int k=1; k<x; k++){
				f1.setData(k, x); 
                f2.setData(j, x);
				f.mulF(f1, f2); 
                f.lowTerms(); 
                f.display();
            }
        }
	cout<< "\n\nPress c to continue or any key to exit: ";
    cin >> ch;
	}while(ch =='c');
    return 0;
}