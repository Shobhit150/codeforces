#include<bits/stdc++.h>
using namespace std;

void makeItZero(int n, vector<int> &a, vector<pair<int,int>> &ans) {
    if(n%2 == 0) {
        ans.push_back({1,n});
        ans.push_back({1,n});
        return;
    }
    ans.push_back({1,n-1});
    ans.push_back({1,n-1});
    ans.push_back({n-1,n});
    ans.push_back({n-1,n});
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++) {
            cin >> a[i];
        }
        vector<pair<int,int>> ans;
        makeItZero(n,a,ans);
        cout << ans.size() << endl;
        for(auto [c,d]: ans) {
            cout << c << " " << d << endl;
        }
    }

    return 0;
}
