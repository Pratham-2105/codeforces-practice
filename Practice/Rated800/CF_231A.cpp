#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;

    int counter = 0;
    
    while(n--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b + c >= 2) counter++;
    }

    cout << counter << endl;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--) {
        solve();
    }
}