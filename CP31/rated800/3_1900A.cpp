#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    if (s.find("...") != string::npos) {
        cout << 2 << endl;
        return;
    } else {
        int count = 0;

        for (char c : s) {
            if (c == '.') count++;
        }
        cout << count << endl;
        return;
    }


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