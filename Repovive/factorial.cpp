#include <bits/stdc++.h>
#include <vector>

using namespace std;
using ll = long long;

vector<ll> dp(1000, -1);

ll fib(ll a) {

  if (a <= 1)
    return a;

  if (dp[a] != -1)
    return dp[a];

  dp[a] = fib(a - 1) + fib(a - 2);
  return dp[a];
}

int main() {
  ll n;
  cin >> n;

  cout << fib(n) << '\n';

  return 0;
}
