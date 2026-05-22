#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n = 0;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0;
    int left = 0, right = 0;

    while(right < n && left <= right) {
        int tempCount = 0;

        if (arr[left] == 0) {
            while(right < n && arr[right] == 0) {
                tempCount++;
                right++;
            }
            left = right;
        }

        else {
            left++;
            right++;
        }

        count = max(count, tempCount);
    }

    cout << count << "\n";
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