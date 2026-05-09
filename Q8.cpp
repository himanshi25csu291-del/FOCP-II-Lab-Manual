#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    for(int i = 1; i <= N; i++) {
        if(i % 3 == 0 && i % 5 == 0)
            cout << i << " Buzz Fuzz";
        else if(i % 3 == 0)
            cout << i << " Buzz";
        else if(i % 5 == 0)
            cout << i << " Fuzz";
        else
            cout << i;

        cout << endl;
    }

    return 0;
}
