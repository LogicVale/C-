#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,t;
    cin >> n >> t;
    vector<pair<double,int>> vec(n);
    for (int i=0;i<n;i++) {
        int m,v;
        cin >> m >> v;
        vec[i].first =1.0 * v/m;
        vec[i].second = m;
    }
    sort(vec.begin(),vec.end());
    double res = 0;
    int num = 0;
    for (int i=n-1;i>=0;i--) {
        if (num+vec[i].second>t) {
            res += vec[i].first * (t-num);
            break;
        }
        res += vec[i].first * vec[i].second;
        num += vec[i].second;
    }
    printf("%.2f",res);
}