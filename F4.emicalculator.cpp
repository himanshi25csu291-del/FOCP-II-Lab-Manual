#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double calculateEMI(double P, double R = 0.01, int T = 12) {
    double emi = (P * R * pow(1 + R, T)) / (pow(1 + R, T) - 1);
    return emi;
}

int main() {
    double p, r;
    int t;
    cin >> p >> r >> t;
    cout << fixed << setprecision(2) << calculateEMI(p, r, t) << endl;
    return 0;
}
