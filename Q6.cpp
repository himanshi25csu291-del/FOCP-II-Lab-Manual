#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        double basic, bonus, net;

        cout << "\nEnter basic salary of employee " << i << ": ";
        cin >> basic;

        bonus = basic * 0.12;
        net = basic + bonus;

        cout << "Bonus: " << bonus << endl;
        cout << "Net Salary: " << net << endl;
    }

    return 0;
}
