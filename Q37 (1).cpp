#include <iostream>
#include <string>
using namespace std;

int main() {
    string user;
    getline(cin, user);
    bool valid = true;
    
    for (int i = 0; i < user.length(); i++) {
        if (!isalnum(user[i])) {
            valid = false;
            break;
        }
    }
    
    if (valid) cout << "Accepted" << endl;
    else cout << "Rejected" << endl;
    return 0;
}
