#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll a, b;
    cin >> a >> b;

    ll xK, yK;
    cin >> xK >> yK;

    ll xQ, yQ;
    cin >> xQ >> yQ;

    vector<pair<ll, ll>> moves = {
        {a, b},
        {a, -b},
        {-a, b},
        {-a, -b},

        {b,  a},
        {b, -a},
        {-b,  a},
        {-b, -a}
    };

    set<pair<ll, ll>> setK;
    set<pair<ll, ll>> setQ;

    for (auto [dx, dy] : moves) {
        setK.insert({xK + dx, yK + dy});
        setQ.insert({xQ + dx, yQ + dy});
    }

    int count = 0;

    for (auto common : setK) {
        if (setQ.count(common)) {
            count++;
        }
    }

    cout << count << "\n";

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