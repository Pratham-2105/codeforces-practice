#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int m = 5, n = 5;

    int row = -1;
    int col = -1;

    int arr[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 1) {
                row = i;
                col = j;
                cout << abs(row - 2) + abs(col - 2) << endl;

                return;
                
            }
        }
    }

    
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--) {
        solve();
    }
}