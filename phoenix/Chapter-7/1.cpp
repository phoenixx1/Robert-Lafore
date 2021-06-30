/*
Write a function called reversit() that reverses a C-string (an array of char ). Use a for
loop that swaps the first and last characters, then the second and next-to-last characters,
and so on. The string should be passed to reversit() as an argument.
Write a program to exercise reversit() . The program should get a string from the user,
call reversit() , and print out the result. Use an input method that allows embedded
blanks. Test the program with Napoleon’s famous phrase, “Able was I ere I saw Elba.”
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