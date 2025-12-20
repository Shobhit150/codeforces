#include<bits/stdc++.h>
using namespace std;

int ambition(int n, vector<int> &a) {
    int ans = INT_MAX;
    for(int i=0;i<n;i++) {
        ans = min(ans, abs(a[i]));
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << ambition(n,a) << endl;

    return 0;
}
