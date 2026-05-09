#include <iostream>
using namespace std;

int main() {
    int m, n, p, q;
    cin >> m >> n >> p >> q;
    
    if (n != p) {
        cout << "Invalid Order" << endl;
        return 0;
    }
    
    int A[m][n], B[p][q], C[m][q];
    
    for(int i=0; i<m; i++) for(int j=0; j<n; j++) cin >> A[i][j];
    for(int i=0; i<p; i++) for(int j=0; j<q; j++) cin >> B[i][j];
    
    for(int i=0; i<m; i++) {
        for(int j=0; j<q; j++) {
            C[i][j] = 0;
            for(int k=0; k<n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
