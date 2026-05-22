#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<int> map(26);

    for (char ch : s) {
        map[ch - 'a']++;
    }

    int oddFreq = 0;
    for (int freq : map) {
        if (freq % 2 == 1) {
            oddFreq++;
        }
    }

    if (oddFreq > k + 1) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
    }

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