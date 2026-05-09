#include <iostream>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    for (int i = start; i <= end; i++) {
        if (i < 2) continue;
        int ok = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) { ok = 0; break; }
        }
        if (ok) cout << i << " ";
    }
    return 0;
}
