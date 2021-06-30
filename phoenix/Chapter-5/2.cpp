/*
Raising a number n to a power p is the same as multiplying n by itself p times. Write a
function called power() that takes a double value for n and an int value for p , and
returns the result as a double value. Use a default argument of 2 for p , so that if this
argument is omitted, the number n will be squared. Write a main() function that gets val-
ues from the user to test this function.
*/

//author @Nishant

#include <iostream>
using namespace std;
void repchar(char='*', int=45);

double power(double n, int p = 2);

int main(){
    double n, ans;
    int p;
    char choice;
    cout << "Enter a number: ";
    cin >> n;
    cout << "You want to input power(y/n) or default will be squared: ";
    cin >> choice;

    if(choice == 'y'){
        cout << "Enter power: ";
        cin >> p;
        ans = power(n, p);
    }else{
        ans = power(n);
    }
    cout << "Answer: " << ans << endl;
    return 0;
}

double power(double n, int p){
    double ans = 1;
    for(int i = 0; i<p; i++)
        ans *= n;
    return ans;
}
