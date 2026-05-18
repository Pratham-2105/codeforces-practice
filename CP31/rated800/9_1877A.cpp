#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;

    int sum = 0;

    for (int i = 0; i < n - 1; i++) {
        int x = 0;
        cin >> x;

        sum += x;
    }

    cout << -1 * sum << endl;
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