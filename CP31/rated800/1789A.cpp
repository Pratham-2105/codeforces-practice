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
    
    bool flag = 0;

    for (int i = 0; i < n; i++) {
      for (int j = i; j < n; j++) {
        if (gcd(arr[i], arr[j]) <= 2) {
          flag = 1;
        }
      }
    }

    if(flag) cout << "YES\n";
    else cout << "NO\n";

    cout.flush();
    return;
}  

bool gcd(int a, int b) {
  if (a == 0)
    return b;

  if (b == 0) 
    return a;

  if (a == b) 
    return a;

  if (a > b) 
    return gcd(a - b, b);

  return gcd(a, b - a);
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
