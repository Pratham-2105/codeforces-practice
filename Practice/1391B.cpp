#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> mat(n, vector<char> (m, 0));
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        cin >> mat[i][j];
      }
    }

    // if mat[i][j] == 'D' go UP
    // if mat[i][j] == 'R' go LEFT
    
    int count = 0;
    for (int i = 0; i < m - 1; i++) {
      if (mat[n - 1][i] == 'D') {
        count++;
      }
    }

    for (int i = 0 ; i < n - 1; i++) {
      if (mat[i][m - 1] == 'R') {
        count++;
      }
    }

    cout << count << "\n";

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
