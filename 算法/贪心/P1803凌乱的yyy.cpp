#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int,int>> vec(n);
    for (int i=0;i<n;i++) {
        cin >> vec[i].second;
        cin >> vec[i].first;
    }
    sort(vec.begin(),vec.end());
    int num = 1;
    int end = vec[0].first;
    for (int i =1;i<n;i++) {
        if (vec[i].second >= end) {
            end = vec[i].first;
            num++;
        }
    }
    cout << num;
}