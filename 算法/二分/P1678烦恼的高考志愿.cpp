#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m,n;
    cin >> m >> n;
    vector<int> mi(m);
    for (int i=0;i<m;i++) {
        cin >> mi[i];
    }
    sort(mi.begin(),mi.end());
    long long sum = 0;
    for (int i=0;i<n;i++) {
        int res;
        cin >> res;
        auto it = lower_bound(mi.begin(),mi.end(),res);
        if (it != mi.end() && *it == res) {
            continue;
        } else {
            if (it == mi.end()) {
                sum += res - mi[m-1];
            } else if (it == mi.begin()) {
                sum +=mi[0] - res;
            } else {
                int l = res - *(it - 1);
                int r = *it  - res;
                if (l > r) {
                    sum += r;
                } else {
                    sum += l;
                }
            }
        }
    }
    cout << sum;
}