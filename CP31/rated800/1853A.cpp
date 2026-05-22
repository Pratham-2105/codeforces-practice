#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int diff = INT_MAX;

    for (int i = 0; i < n - 1; i++) {
        diff = min(diff, arr[i + 1] - arr[i]);
        if (diff < 0) {
            cout << "0\n";
            return;
        }
    }

    cout << diff / 2 + 1 << endl;
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