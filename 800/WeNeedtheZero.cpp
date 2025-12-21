#include<bits/stdc++.h>
using namespace std;

int needZero(int n, vector<int> &a) {
    int ans = 0;
    for(int i=0;i<n;i++) {
        ans = ans ^ a[i];
    }
    
    if(ans == 0) return 0;
    if(n%2 == 0) return -1;
    return ans;
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
        cout << needZero(n, a) << endl;
        
    }

    return 0;
}