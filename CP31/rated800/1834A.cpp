#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n,x;
    cin >> n;

    int pos = 0;
    int neg = 0;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == -1) {
            neg++;
        } else {
            pos++;
        }
    }

    int ops = 0;

    while (pos < neg || neg % 2 == 1) // Loop to make array good
        {
            ops++; // Increment operations as we convert a -1 to 1
            pos++; // Increase count of +1s
            neg--; // Decrease count of -1s
        }

    cout << ops << endl;

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