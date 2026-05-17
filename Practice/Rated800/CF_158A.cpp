#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    
    int n, k;
    cin >> n >> k;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int score = arr[k - 1];

    int counter = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] > 0 && arr[i] >= score) counter++;
    }

    cout << counter << endl;
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