#include <iostream>
using namespace std;

int sumArray(int arr[], int size) {
    int s = 0;
    for (int i = 0; i < size; i++) s += arr[i];
    return s;
}

double average(int arr[], int size) {
    return (double)sumArray(arr, size) / size;
}

bool contains(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) return true;
    }
    return false;
}

int main() {
    int n, key;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cin >> key;

    cout << sumArray(arr, n) << endl;
    cout << average(arr, n) << endl;
    if (contains(arr, n, key)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
