#include <iostream>
using namespace std;

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;
    cin >> x >> y;

    int a = x, b = y;
    swapByValue(a, b);
    cout << "After swapByValue: " << a << " " << b << endl;

    a = x, b = y;
    swapByReference(a, b);
    cout << "After swapByReference: " << a << " " << b << endl;

    return 0;
}
