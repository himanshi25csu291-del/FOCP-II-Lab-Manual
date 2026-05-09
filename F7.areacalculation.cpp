#include <iostream>
using namespace std;

double area(double radius) {
    return 3.14159 * radius * radius;
}

double area(double length, double breadth) {
    return length * breadth;
}

double area(double base, double height, bool isTriangle) {
    return 0.5 * base * height;
}

int main() {
    int choice;
    cin >> choice;
    if (choice == 1) {
        double r; cin >> r;
        cout << area(r);
    } else if (choice == 2) {
        double l, b; cin >> l >> b;
        cout << area(l, b);
    } else if (choice == 3) {
        double b, h; cin >> b >> h;
        cout << area(b, h, true);
    }
    return 0;
}
