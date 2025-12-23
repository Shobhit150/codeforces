#include<bits/stdc++.h>
using namespace std;

int jellyfish(int a, int b, int n, vector<int> &arr) {
    int ans = 0;
    for(int i=0;i<n;i++) {
        ans += min(a, arr[i]);
    }
    return ans + b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) {
            cin >> arr[i];
        }
        cout << jellyfish(a,b,n,arr) << endl;
    }

    return 0;
}
