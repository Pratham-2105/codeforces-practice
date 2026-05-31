#include<bits/stdc++.h>
using namespace std;

using ll = long long;
  
void solve() {
    ll a, b, n;
    cin >> a >> b >> n;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    ll min_time = b;
    
    for (int i = 0; i < n; ++i) {
      min_time += min(arr[i], a - 1);
    }

    cout << min_time  << '\n';


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
