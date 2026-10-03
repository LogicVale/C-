#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long l;
    int n,m;
    long long c = 0;
    cin >> l >> n >> m;
    vector<long long> vec(n+1);
    for (int i=0;i<n;i++) {
        long long mid;
        cin >> mid;
        vec[i] = mid - c;
        c = mid;
    }
    vec[n] = l-c;
}