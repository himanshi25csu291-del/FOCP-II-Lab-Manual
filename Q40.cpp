#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, res = "";
    getline(cin, s);
    
    int words = 0, digits = 0, special = 0;
    bool inSpace = true;
    
    for (int i = 0; i < s.length(); i++) {
        if (isspace(s[i])) {
            if (!inSpace) {
                res += ' ';
                inSpace = true;
            }
        } else {
            res += s[i];
            inSpace = false;
        }
    }
    if (res.back() == ' ') res.pop_back();

    for (int i = 0; i < res.length(); i++) {
        if (i == 0) res[i] = toupper(res[i]);
        else res[i] = tolower(res[i]);
        
        if (isdigit(res[i])) digits++;
        else if (!isalpha(res[i]) && !isspace(res[i])) special++;
    }
    
    for (int i = 0; i < res.length(); i++) {
        if (!isspace(res[i]) && (i == 0 || isspace(res[i-1]))) words++;
    }

    cout << "Normalized: " << res << endl;
    cout << "Words: " << words << ", Digits: " << digits << ", Special: " << special << endl;
    
    if (special == 0) cout << "Validation Successful" << endl;
    else cout << "Validation Failed: Contains Special Characters" << endl;

    return 0;
}
