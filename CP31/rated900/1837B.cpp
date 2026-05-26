#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
   int n;
   cin >> n;

   string s;
   cin >> s;
    
   int ans = 1, curr = 1;
   for (int i = 1; i < n; ++i) {
      if(s[i] == s[i - 1]) curr++;
      else curr = 1;

      ans = max(ans, curr);
   }

   cout << ans + 1 << "\n";

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
