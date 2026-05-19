#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;   

    vector<int> a(n);

    for (int &x : a) cin >> x;

    sort(a.begin(), a.end());

    if (a[0] == a[n - 1]) {
        cout << -1 << '\n';
        return;
    }

    int cnt = 0;

    while (cnt < n && a[cnt] == a[0]) {
        cnt++;
    }

    cout << cnt << " " << n - cnt << '\n';

    for (int i = 0; i < cnt; i++) {
        cout << a[i] << " ";
    }
    cout << '\n';

    for (int i = cnt; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << '\n';

    cout.flush();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}