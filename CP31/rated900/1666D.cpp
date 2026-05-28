#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    string s, t;
    cin >> s >> t;
    
    vector<int> freq_t(27);
    
    for (int i = 0; i < t.size(); i++) {
      freq_t[t[i] - 'A']++;
    }


    for (int i = s.size() - 1; i >= 0; i--) {
      char ch = s[i];
      if (freq_t[ch - 'A'] > 0) {
        freq_t[ch - 'A']--;
      } 
      else {
        s[i] = '.';
      }
    }

    string final_string = "";
    for (int i = 0; i < s.size(); i++) {
      if (s[i] != '.') {
        final_string += s[i];
      }
    }

    if (final_string == t) {
      cout << "YES" << '\n';
    }
    else {
      cout << "NO" << '\n';
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
