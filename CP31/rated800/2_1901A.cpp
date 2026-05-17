#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n, x;
    cin >> n >> x;

    int arr[n + 2];
    arr[0] = 0;
    for (int i = 1; i < n + 1; i++) {
        cin >> arr[i];
    }
    arr[n + 1] = x;

    int mx = -1;

    for (int i = 0; i < n + 1; i++) {
        mx = max(mx, abs(arr[i] - arr[i + 1]));
    }

    int tail = 2 * (x - arr[n]);

    cout << max(tail, mx) << endl;

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