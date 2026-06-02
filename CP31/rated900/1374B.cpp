#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n; cin >> n;
  int moves = 0;

  long long count_of_3 = 0; // Initialize counter for divisions by 3
		long long count_of_2 = 0; // Initialize counter for divisions by 2

		// Count how many times n can be divided by 3
		while (n > 0 && n % 3 == 0) // log3(n)
		{
			count_of_3++;
			n /= 3;
		}

		// Count how many times n can be divided by 2
		while (n > 0 && n % 2 == 0) // log2(n)
		{
			count_of_2++;
			n /= 2;
		}

		// If n is not reduced to 1 or if there are more divisions by 2 than by 3, it's impossible
		if (n > 1 || count_of_2 > count_of_3)
			cout << -1 << endl; // Output -1 if it's impossible
		else
			// Output the total number of moves needed
			cout << count_of_3 + (count_of_3 - count_of_2) << endl;
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
