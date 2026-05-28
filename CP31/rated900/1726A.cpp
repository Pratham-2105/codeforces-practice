#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
      cin >> arr[i];
    }

    int answer = arr[n - 1] - arr[0];

    for (int i = 0; i < n - 1; ++i) {
      answer = max(answer, arr[n - 1] - arr[i]);
    }
    for (int i = 1; i < n; ++i) {
      answer = max(answer, arr[i] - arr[0]);
    }
    for (int i = 0; i < n - 1; ++i) {
      answer = max(answer, arr[i] - arr[i + 1]);
    }

    cout << answer << '\n';

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
