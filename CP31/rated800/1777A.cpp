#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0;

    for (int i = 0; i < n - 1; i++) {
        ll a = arr[i];
        ll b = arr[i + 1];

        if (a % 2 == b % 2) {
            count++;
            arr[i + 1] = a;
        }
    }

    cout << count << "\n";

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