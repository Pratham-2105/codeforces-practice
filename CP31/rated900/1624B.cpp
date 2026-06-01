#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll a, b , c;
  cin >> a >> b >> c;
  
  bool ans = false;
  
  ll A = 2 * b - c;
  if (A / a > 0 && A % a == 0) 
    ans = true;

  ll B = (a + c) / 2;
  if (B / b > 0 && B % b == 0 && (c - a) % 2 == 0) 
    ans = true;

  ll C = 2 * b - a;
  if (C / c > 0 && C % c == 0)
    ans = true;

  if (ans) 
    cout << "YES\n";
  else 
    cout << "NO\n";


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
