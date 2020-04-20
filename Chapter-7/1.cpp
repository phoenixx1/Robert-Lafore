/*
Reverse a string
*/

//author @Nishant

#include<bits/stdc++.h>
using namespace std;

void reverseString(char s[]);

int main(){
    char input[100];
    cout << "Enter a string: ";
    cin.get(input, 100);

    reverseString(input);
    cout << "Reversed string: " << input << endl;
    return 0;
}

void reverseString(char s[]){
    int len = strlen(s);
    for(int j = 0; j < len/2; j++){
        char temp = s[j];
        s[j] = s[len-j-1];
        s[len-j-1] = temp;
    }
}