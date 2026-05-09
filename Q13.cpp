#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, d, r1, r2;
    cin >> a >> b >> c;

    d = b * b - 4 * a * c;

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        cout << r1 << " " << r2 << endl;
    } else if (d == 0) {
        r1 = -b / (2 * a);
        cout << r1 << endl;
    } else {
        cout << "Complex Roots" << endl;
    }
    return 0;
}
