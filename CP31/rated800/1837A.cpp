#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int x, k;
    cin >> x >> k;

    if (x % k != 0) {
        cout << 1 << endl;
        cout << x << endl;
        return;
    }
    else {
        cout << 2 << endl;
        cout << x - k - 1 << " " << k + 1 << endl;
        return;
    }
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