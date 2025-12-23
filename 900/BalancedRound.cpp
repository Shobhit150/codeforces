#include<bits/stdc++.h>
using namespace std;

int balanced(int n, int k, vector<int> &a) {
    sort(a.begin(), a.end());
    int j=0;
    int ans = 0;
    for(int i=1;i<n;i++) {
        while(j<i && ((a[i] - a[j]) > k)) {
            j++;
        }
        ans = max(ans, i-j+1);
    }
    return ans;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i=0;i<n;i++) {
            cin >> a[i];
        }
        cout << balanced(n,k,a) << endl;
    }
    return 0;
}