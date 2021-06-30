// ex2_5.cpp
// check if lowercase
#include <iostream>
#include <ctype.h>

using namespace std;

int main() {
    char character, answer;
    cout << "Enter a char: ";
    cin >> character;
    answer = int (islower(character));
    cout << "answer: " << answer << endl;
    return 0;
}
