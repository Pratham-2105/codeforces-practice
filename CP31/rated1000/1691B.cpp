#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  vector<ll> pairs(n);

  for (int i = 0; i < n; ++i) {
    cin >> pairs[i];
  }

  map<ll, ll> freq;

  for (int i = 0; i < n; ++i) {
    freq[pairs[i]]++;
  }

  bool flag = 0;

  for (auto it : freq) {
    if (it.second == 1) {
      flag = 1;
      break;
    }
  }

  if (flag) {
    cout << -1 << '\n';
    return;
  }

  vector<ll> students(n);
  for (int i = 0; i < n; ++i)
    students[i] = i + 1;

  ll l = 0, r = 0;

  while (r < n) {
    if (pairs[l] == pairs[r]) {
      r++;
    } else {
      rotate(students.begin() + l, students.begin() + l + 1,
             students.begin() + r);
      l = r;
    }
  }

  rotate(students.begin() + l, students.begin() + l + 1, students.begin() + r);

  for (auto i : students)
    cout << i << " ";

  cout << '\n';

  return;
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;

  while (t--) {
    solve();
  }
}
