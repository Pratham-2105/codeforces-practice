#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n; 

    vector<int> a(n);
    for (int &x : a) {
      cin >> x;
    }

    int mx = *max_element(a.begin(), a.end());
    int mn = *min_element(a.begin(), a.end());
    cout << (mx - mn + 1) / 2 << "\n"; 
    
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
