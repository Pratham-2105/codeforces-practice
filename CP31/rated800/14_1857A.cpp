#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;
    
    int odd = 0;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x % 2 == 1) odd++;
    }

    if (odd % 2 == 0) {
        cout << "YES" << endl;
        return;
    } else {
        cout << "No" << endl;
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