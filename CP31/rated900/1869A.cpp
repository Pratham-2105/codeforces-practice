#include<bits/stdc++.h>
using namespace std;

using ll = long long;


void solve() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; ++i){
      int x;
      cin >> x;
    }

    if (n % 2 == 0) {
      cout << 2 << "\n";
      cout << 1 << " " << n << "\n";
      cout << 1 << " " << n << "\n"; 
    }
    else {
      cout << 4 << "\n";
      cout << 1 << " " << n - 1 << "\n";
      cout << 1 << " " << n - 1 << "\n";
      cout << n - 1 << " " << n << "\n";
      cout << n - 1 << " " << n << "\n";
    }
    
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
