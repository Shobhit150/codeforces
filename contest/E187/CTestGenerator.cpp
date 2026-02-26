#include<bits/stdc++.h>
using namespace std;

#define ll long long
void solve() {
    ll s, m;
    cin >> s >> m;
    if(s%2 == 1 && m%2==0) {
        cout << -1 << "\n";
        return;
    }
    cout << (s+m-1)/m << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}