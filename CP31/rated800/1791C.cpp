#include<bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(char s, char e) {
    if (s == '0' && e == '1') return true;
    if (s == '1' && e == '0') return true;

    return false;
}

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int left = 0, right = n - 1;
    int count = 0;

    while(left <= right && check(s.at(left), s.at(right))) {
        count++;
        left++;
        right--;
    }

    cout << n  - (2 * count) << endl;
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