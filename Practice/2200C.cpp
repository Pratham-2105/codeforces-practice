#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    stack<char> st; 

    for (int i = 0; i < n; ++i) {
      if (st.empty()) {
        st.push(s[i]);
        continue;
      }
      
      if (st.top() == s[i]) {
        st.pop();
      }
      else {
        st.push(s[i]);
      }
    }

    if (st.empty()) {
      cout << "YES\n";
    }
    else {
      cout << "NO\n";
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
