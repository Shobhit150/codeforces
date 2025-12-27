#include<bits/stdc++.h>
using namespace std;

void oddQueries(long long n, long long q, vector<long long> &a, vector<vector<long long>> &b) {
    vector<long long> pre;
    pre.push_back(0);
    long long preSum = 0;
    for(int i=0;i<n;i++) {
        preSum += a[i];
        pre.push_back(preSum);
    }
    // cout << endl;
    // for(int i=0;i<=n;i++) {
    //     cout << pre[i] << " ";
    // }
    // cout << endl;
    // for(int i=0;i<=n;i++) {
    //     cout << i << " ";
    // }
    // cout << endl;

    for(int i=0;i<q;i++) {
        long long l = b[i][0];
        long long r = b[i][1];
        long long k = b[i][2];
        // cout << " -- " << pre[n] << " " << pre[l] << " " << pre[r - 1] << " " << ((r-l+1)*k) << endl;
        // cout << " -> " << n << " " << l-1 << " " << r << " " << ((r-l+1)*k)%2 << endl;
        if((pre[n] - pre[r] + pre[l-1] + (r-l+1)*k)%2 == 1) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, q;
        cin >> n >> q;
        vector<long long> a(n);
        for(int i=0;i<n;i++ ){
            cin >> a[i];
        }
        vector<vector<long long>> b(q, vector<long long>(3));
        for(int i=0;i<q;i++) {
            for(int j=0;j<3;j++) {
                cin >> b[i][j];
            }
        }
        oddQueries(n,q,a,b);

    }
    return 0;
}
