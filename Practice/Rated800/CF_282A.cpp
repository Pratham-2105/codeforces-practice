#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;

    int x = 0;

    while(n--) {
        string s;
        cin >> s;

        if (s == "++X" || s == "X++") {
            x++;
        } else {
            x--;
        }
    }

    cout << x << endl;
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