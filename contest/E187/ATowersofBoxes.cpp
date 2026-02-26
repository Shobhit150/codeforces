#include<bits/stdc++.h>
using namespace std;

#define ll long long
void solve() {
    int n,m,d;
    cin >> n >> m >> d;
    int perBox = (d/m) + 1;
    // cout << perBox << "\n";
    cout << (n+perBox-1)/perBox << "\n";
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