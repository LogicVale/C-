#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >> m;
    vector<long long> a(n);
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    for (int i=0;i<m;i++) {
        int res;
        cin >> res;
        int l = 0;
        int r = n-1;
        int mid;
        int con = -1;
        while (l<=r) {
            mid = (l+r)/2;
            if (a[mid]>res) {
                r = mid - 1;
            } else if(a[mid]<res) {
                l = mid + 1;
            } else {
                r = mid - 1;
                con = mid;
            }
        }
        cout << con << " ";
    }
}