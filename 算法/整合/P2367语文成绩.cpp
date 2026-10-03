#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,p;
    cin >> n >> p;
    vector<long long> score(n);
    for (int i = 0;i<n;i++) {
        cin >> score[i];
    }
    for (int i = 0;i<p;i++) {
        int l,r;
        long long v;
        cin >> l >> r >> v;
        for (int j = l-1;j<=r-1;j++) {
            score[j]+= v;
        }
    }
    long long min = score[0];
    for (int i=0;i<n;i++) {
        if (min > score[i]) {
            min = score[i];
        }
    }
    cout << min;
}