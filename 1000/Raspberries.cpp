#include<bits/stdc++.h>
using namespace std;

int raspberries(int n, int k, vector<int> &a) {
    int mini = INT_MAX;
    if(k==4) {
        int twos = 0;
        int fours = 0;
        for(int i=0;i<n;i++) {
            if(a[i] % 2 == 0) {
                twos++;
            }
            if(a[i] % 4 == 0) {
                fours++;
            }
        }
        if(fours >= 1 || twos >= 2) {
            return 0;
        }
        
        if(n==1) {
            if(a[0] == 0) {
                return 0;
            } else {
                return k - a[0];
            }
        }
        if(twos == 1) {
            return 1;
        }
        mini = 2;
    }
    int ans = 0;
    for(int i=0;i<n;i++) {
        if(a[i]%k == 0) {
            ans = 0;
        } else{
            ans = k - (a[i]%k);
        }
        mini = min(mini, ans);
    }

    return mini;
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
        cout << raspberries(n,k,a) << "\n";

    }
    return 0;
}
 