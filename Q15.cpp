#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    double num, maxVal;

    cin >> maxVal;
    for (int i = 1; i < n; i++) {
        cin >> num;
        if (num > maxVal) maxVal = num;
    }

    cout << maxVal << endl;
    return 0;
}
