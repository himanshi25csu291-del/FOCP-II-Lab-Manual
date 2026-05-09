#include <iostream>
using namespace std;

int main() {
    double pricePerItem, total;
    int qty;
    cin >> qty >> pricePerItem;

    total = qty * pricePerItem;

    if (qty > 1000) {
        total = total - (0.10 * total);
    }

    cout << total << endl;
    return 0;
}
