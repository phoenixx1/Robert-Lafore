// ex2_9.cpp
// sum of fractions

#include <iostream>

using namespace std;

int main()
    {
    int f1_n1, f1_n2,
        f2_n1, f2_n2,
        sum_n1, sum_n2;
    char op;
    
    cout<<"enter First fraction: ";
    cin>>f1_n1 >>op >>f1_n2;
    cout<<"enter Second fraction: ";
    cin>>f2_n1 >>op >>f2_n2;
    
    sum_n1 = f1_n1*f2_n2 + f1_n2*f2_n1;
    sum_n2 = f1_n2 * f2_n2;
    
    cout<< "sum is: "<< sum_n1 <<'/' <<sum_n2;
    
    return 0;
    }



