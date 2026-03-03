#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, d;
    cin >> n >> d;
    vector<int> arr(n);
    priority_queue<int> pq;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
        pq.push(arr[i]);
    }
    int ans = 0;
    while(n>0) {
        int curr = pq.top(); pq.pop();
        int need = (d+curr)/curr;
        // cout << curr << " " << need << " " << n << "--\n";
        if(need > n) {
            break;
        }
        n -= need;
        ans++;
    }
    cout << ans << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;

    // while (t--) {
    solve();
    // }
    return 0;
}
 