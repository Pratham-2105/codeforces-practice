#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    string s;
    cin >> s;

    if (s.length() <= 10) {
        cout << s << endl;
        return;
    } 
    string length = to_string(s.length() - 2);

    string out;
    out += s.front();
    out += length;
    out += s.back();

    cout << out << endl;
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