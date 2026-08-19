#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[1000010];

bool check(int h) {
    long long sum = 0;
    for (int i=0;i<n;i++) {
        if (a[i]>h) {
            sum += a[i]-h;
        }
    }
    if (sum >= m) {
        return true;
    }
    return false;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for (int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    int l = 0;
    int r = a[n-1];
    int res = 0;
    while (l<=r) {
        int mid = (l+r)/2;
        if (check(mid)) {
            res = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << res;
}

