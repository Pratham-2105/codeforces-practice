#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll x, n;
    cin >> x >> n;
    
    ll final_pos;

    if (n % 4 == 1) {
      final_pos = -n;
    }
    else if (n % 4 == 2) {
      final_pos = 1;
    }
    else if (n % 4 == 3) {
      final_pos = n + 1;
    }
    else if (n % 4 == 0) {
      final_pos = 0;
    }

    if (x % 2 == 0) {
      final_pos = x + final_pos;
    }
    else {
      final_pos = x - final_pos;
    }

    cout << final_pos << "\n";

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
