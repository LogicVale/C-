#include <bits/stdc++.h>
using namespace std;

int n,k;
int a[100000];

int check(int l) {
    int num = 0;
    if (l == 0) {
        return -1;
    }
    for (int i=0;i<n;i++) {
        num += a[i]/l;
    }
    return num;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    sort(a,a+n);
    int l = 0;
    int r = a[n-1];
    int res = 0;
    while (l<=r) {
        int mid = (l+r)/2;
        int tar = check(mid);
        if (tar >= k) {
            res = mid;
            l = mid + 1;
        } else if (tar < k) {
            r = mid - 1;
        }
    }
    cout << res;
}
