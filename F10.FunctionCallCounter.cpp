#include <iostream>
using namespace std;

void callCounter() {
    static int count = 0;
    count++;
    cout << "Call count: " << count << endl;
}

int main() {
    callCounter();
    callCounter();
    callCounter();
    return 0;
}
