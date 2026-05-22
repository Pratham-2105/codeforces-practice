#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    if (d < b) {
        cout << -1 << endl;
        return;
    }

    ll vertical = d - b;


    if (a + vertical < c) {
        cout << -1 << endl;
    } else {
        vertical += (a + vertical - c);
        cout << vertical << endl;   
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