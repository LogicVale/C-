#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m,n;
    cin >> m >> n;
    vector<int> vec(m);
    for (int i=0;i<m;i++) {
        cin >> vec[i];
    }
    sort(vec.begin(),vec.end());
    long long sum = 0;
    for (int i=0;i<n;i++) {
        int num;
        cin >> num;
        auto res = lower_bound(vec.begin(),vec.end(),num);
        if (res != vec.end() && *res == num) {
            sum += 0;
        } else {
            if (res == vec.begin()) {
                sum += *res - num;
            } else if (res == vec.end()) {
              sum += num - *(res -1);
            } else {
                int l = num - *(res-1);
                int r = *res - num;
                if (l>r) {
                    sum += r;
                } else {
                    sum += l;
                }
            }
        }
    }
    cout << sum;
}