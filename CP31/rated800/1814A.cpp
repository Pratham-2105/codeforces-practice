#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n, k;
    cin >> n >> k;

    if (n % 2 == 0 || (n - k) % 2 == 0) {
        cout << "YES\n";
        return;
    } else {
        cout << "NO\n";
        return;
    }
    
    cout.flush();
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