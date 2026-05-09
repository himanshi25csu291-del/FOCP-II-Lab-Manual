#include <iostream>
using namespace std;

int main() {
    int marks[3][5];
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> marks[i][j];
        }
    }
    
    cout << "Student 1, Subject 2: " << marks[0][1] << endl;
    cout << "Student 3, Subject 5: " << marks[2][4] << endl;
    
    return 0;
}
