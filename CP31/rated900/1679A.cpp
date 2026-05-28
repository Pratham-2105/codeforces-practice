#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n;
    cin >> n;
    
    if (n % 2 == 1) {
      cout << -1 << '\n';
      return;
    }

    // case 1 is where n is divisble by both 4, 6
    // case 2 is where n is only divisble by one of them;
      
    ll mx = n / 4;
    ll mn = n / 6;

    if (mn == 0) mn = 1;

    cout << mn << " " << mx << "\n";

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
