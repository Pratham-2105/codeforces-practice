    #include<bits/stdc++.h>
    using namespace std;

    using ll = long long;

    void solve() {
        int n, m;
        cin >> n >> m;

        string s, x;

        cin >> x;
        cin >> s;

        int ops = 0;

        for (int i = 0; i <= 5; i++) {
            if (x.find(s) != string::npos) {
                cout << ops << endl;
                return;
            }
            x += x;
            ops++;
        }

        if (x.find(s) == string::npos) {
            cout << -1 << endl;
        }
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