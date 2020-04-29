/*
Start with a program that allows the user to input a number of integers, and then stores
them in an int array. Write a function called maxint() that goes through the array,
element by element, looking for the largest one. The function should take as arguments
the address of the array and the number of elements in it, and return the index number of
the largest element. The program should call this function and then display the largest
element and its index number. (See the SALES program in this chapter.)
*/
//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int maxint(int *a, int n){
    int max = 0, index;
    for(int i = 0; i < n; i++){
        if(a[i] > max)
		{
			max = a[i];
			index = i;
		}
    }
    return index;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int index = maxint(a, n);
    cout << a[index] << " at " << index;
    return 0;
}
