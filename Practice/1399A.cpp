#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }

    bool flag = 1;
    sort(a.begin(), a.end());

    for (int i = 0; i < n - 1; i++) {
      if (a[i + 1] - a[i] > 1) flag = 0;
    }

    cout << (flag ? "YES\n" : "NO\n");

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
