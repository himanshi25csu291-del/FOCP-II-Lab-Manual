#include <iostream>
using namespace std;

int main() {
    int choice;
    double a, b;
    char cont;

    do {
        cout << "1.Add 2.Sub 3.Mul 4.Div: ";
        cin >> choice >> a >> b;

        if (choice == 1) cout << a + b;
        else if (choice == 2) cout << a - b;
        else if (choice == 3) cout << a * b;
        else if (choice == 4) cout << a / b;

        cout << "\nContinue? (y/n): ";
        cin >> cont;
    } while (cont == 'y');

    return 0;
}
