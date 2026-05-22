#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    if (c % 2 == 0) {
        if (a > b) {
            cout << "First" << endl;
            return;
        } else {
            cout << "Second" << endl;
            return;
        }
    } else {
        if (a >= b) {
            cout << "First" << endl;
            return;
        } else {
            cout << "Second" << endl;
            return;
        }
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