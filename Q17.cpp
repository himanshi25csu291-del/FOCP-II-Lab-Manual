#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, sumP = 0, sumA = 0, temp, rem, digits = 0;
    cin >> n;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) sumP += i;
    }

    temp = n;
    int temp2 = n;
    while (temp2 > 0) { temp2 /= 10; digits++; }
    while (temp > 0) {
        rem = temp % 10;
        sumA += pow(rem, digits);
        temp /= 10;
    }

    if (sumP == n) cout << "Perfect" << endl;
    if (sumA == n) cout << "Armstrong" << endl;
    return 0;
}
