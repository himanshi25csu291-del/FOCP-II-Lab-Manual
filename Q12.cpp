#include <iostream>
using namespace std;

int main() {
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    if (s1 == s2 && s2 == s3) {
        cout << "Equilateral" << endl;
    } else if (s1 == s2 || s2 == s3 || s1 == s3) {
        cout << "Isosceles" << endl;
    } else {
        cout << "Scalene" << endl;
    }
    return 0;
}
