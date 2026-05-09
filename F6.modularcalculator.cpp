#include <iostream>
using namespace std;

float add(float a, float b) { return a + b; }
float sub(float a, float b) { return a - b; }
float mul(float a, float b) { return a * b; }
float divi(float a, float b) { return a / b; }

int main() {
    int choice;
    float x, y;
    cin >> choice >> x >> y;
    if (choice == 1) cout << add(x, y);
    else if (choice == 2) cout << sub(x, y);
    else if (choice == 3) cout << mul(x, y);
    else if (choice == 4) cout << divi(x, y);
    return 0;
}
