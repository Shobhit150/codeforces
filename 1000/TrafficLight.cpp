#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    char c;
    string s;
    cin >> n;
    cin >> c;
    cin >> s;

    s = s + s;
    int sz = s.size();
    bool foundG = false;
    int curr = 0;
    int maxi = 0;
    for(int i=sz-1; i>=0;i--) { // rggry rggry
        if(s[i] == 'g') {
            foundG = true;
            curr = 0;
        }
        if(s[i] == c && foundG) {
            maxi = max(curr, maxi);
        }
        if(foundG) {
            curr++;
        }
    }
    cout << maxi << "\n";
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
 