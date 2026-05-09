#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if(isdigit(ch))
        cout << "Number";
    else if(isalpha(ch)) {
        char c = tolower(ch);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            cout << "Vowel";
        else
            cout << "Consonant";
    }
    else
        cout << "Special character";

    return 0;
}
