#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int w;
    cin >> w;

    if (w > 2 && w % 2 == 0) cout << "YES";
    else cout << "NO";
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