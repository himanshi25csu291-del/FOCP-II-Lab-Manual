#include <iostream>
#include <string>
using namespace std;

int main() {
    string id;
    cin >> id;
    bool isPal = true;
    int len = id.length();

    for (int i = 0; i < len / 2; i++) {
        if (id[i] != id[len - 1 - i]) {
            isPal = false;
            break;
        }
    }

    if (isPal) cout << "Palindrome" << endl;
    else cout << "Not Palindrome" << endl;
    return 0;
}
