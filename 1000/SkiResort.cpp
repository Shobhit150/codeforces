#include<bits/stdc++.h>
using namespace std;

#define ll long long
void skiresort(int n, int k, int q, vector<int> &a) {
    ll ans = 0;
    ll curr = 0;
    int continousCount = 0;
    for(int i=0;i<n;i++) {
        if(a[i] <= q) {
            continousCount++;
        } else {
            ans += curr;
            continousCount = 0;
            curr = 0;

        }
        if(continousCount >= k) {
            curr = curr + (continousCount - k + 1);
        }
    }
    ans += curr;
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

     while (t--) {
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> a(n);
        for(int i=0;i<n;i++) {
            cin >> a[i];
        }
        skiresort(n,k,q,a);

    }
    return 0;
}