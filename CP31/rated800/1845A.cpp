#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n, k, x;
    cin >> n >> k >> x;

    if (x != 1) {
        cout << "YES" << endl;
        cout << n << endl;
        for (int i = 1; i <= n; i++) {
            cout << 1 << " ";
        }
        cout << endl;
        return;
    }

    if (n % 2 == 0) {
        if (k >= 2) {
            cout << "YES\n";
            cout << n / 2 << "\n";

            for (int i = 0; i < n / 2; i++) {
                cout << 2 << " ";
            }
            cout << "\n";
            return;
        }
    }

    else {
        if (k >= 3) {
            cout << "YES\n";
            cout << 1 + (n - 3) / 2 << "\n";
            cout << 3 << " ";

            for (int i = 0; i < (n - 3) / 2; i++) {
                cout << 2 << " ";
            }
            cout << "\n";
            return;
        }
    }

    cout << "NO\n";

    cout.flush();
    return;
}   

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--) {
        solve();
    }
}