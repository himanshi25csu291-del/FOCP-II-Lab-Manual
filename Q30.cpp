#include <iostream>
using namespace std;

int main() {
    double salary[10], total = 0;
    
    for (int i = 0; i < 10; i++) {
        cin >> salary[i];
        total += salary[i];
    }
    
    double average = total / 10;
    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;
    
    return 0;
}
