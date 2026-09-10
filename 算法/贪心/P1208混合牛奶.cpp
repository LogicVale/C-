#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    vector<pair<int,int>> vec(m);
    for (int i=0;i<m;i++) {
        cin >> vec[i].first;
        cin >> vec[i].second;
    }
    sort(vec.begin(),vec.end());
    int sum = 0;
    int res = 0;
    for (int i=0;i<m;i++) {
        if (sum<n) {
            sum += vec[i].second;
            if (sum>n) {
                res += (n - sum + vec[i].second)*vec[i].first;
            } else {
                res += vec[i].first*vec[i].second;
            }
        }
    }
    // for (int i=0;i<m;i++) {
    //     cout << vec[i].first << " " << vec[i].second << "\n";
    // }
    cout << res;
}