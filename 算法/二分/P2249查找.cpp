#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    vector<long long> a(n);
    for (int i =0 ;i<n;i++) {
        cin >> a[i];
    }
    for (int i=0;i< m;i++) {
        long long tar;
        cin >> tar;
        auto it = lower_bound(a.begin(),a.end(),tar);
        if (it != a.end() && *it == tar) {
            cout << it-a.begin() +1 << " ";
        } else {
            cout << -1 << " ";
        }
    }
}