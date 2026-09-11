#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    priority_queue<int,vector<int>,greater<int>> que;
    for (int i=0;i<n;i++) {
        int c;
        cin >> c;
        que.push(c);
    }
    int res = 0;
    while (que.size()>1) {
        int q1 = que.top();
        que.pop();
        int q2 = que.top();
        que.pop();
        res += q1 + q2;
        que.push(q1 + q2);
    }
    cout << res;
}