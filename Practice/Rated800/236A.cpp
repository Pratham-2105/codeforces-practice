#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    string s;
    cin >> s;

    int freq[27] = {0};

    for (int i = 0; i < s.size(); i++) {
        freq[s[i] - 'a']++;
    }

    int count = 0;

    for (int x : freq) {
        if (x > 0) {
            count++;
        }
    }

    // cout << count << endl;
    if (count % 2 == 1) {
        cout << "IGNORE HIM!" << endl;
    } else {
        cout << "CHAT WITH HER!" << endl;
    }


    cout.flush();
    return;
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