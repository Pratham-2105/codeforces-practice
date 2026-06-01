#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const int md = 676767677;


void solve() {
  int n; cin >> n;
  int cost = 0;
  
  vector<int> arr(n);

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
    
  for (int i = 0; i < n; ++i) {
    if(arr[i] > 1) cost += arr[i];
  }

  if(arr[n - 1] == 1) cost += 1;

  cout << cost << '\n';
  
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
