#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n);
    int total = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        total ^= arr[i];    
    }   

    if (n % 2 == 1) {
        cout << total << endl;;
    }
    else {
        if (total == 0) {
            cout << total << endl;
        }   
        else {
            cout << -1 << endl;
        }    
    }


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