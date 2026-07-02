/*
 *
 *  Author: beingPratham
 *
 */

#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

vector<ll> cost;
void helper() {
  long long c = 3;
  long long cnt = 1;
  for (int i = 0; i < 21; ++i) {
    cost.push_back(c);
    c = 3 * c + cnt;
    cnt *= 3;
  }
}

void solve() {
  ll n;
  cin >> n;

  // so 3^x+1+x⋅3^x−1 is the number of coins for of N watermelons;
  // considering each coin is 1 unit.....
  // 3^x * (3 + x / 3) -> coins;

  ll min_k = 0, min_cost = 0;
  int sz = 0;

  while (n) {
    min_k += n % 3;
    min_cost += (n % 3) * cost[sz];
    n /= 3;
    sz++;
  }

  cout << min_cost << '\n';
  return;
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;
  helper();

  while (t--) {
    solve();
  }
}
