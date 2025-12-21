#include<bits/stdc++.h>
using namespace std;

int blank(int n, vector<int> &a) {
    int i=0;
    int count = 0;
    int maxi = 0;
    while(i<n) {
        if(a[i] == 0) {
            count++;
        } else {
            count = 0;
        }
        maxi = max(maxi, count);
        i++;
    }
    return maxi;
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
        cout << blank(n,a) << endl;
        
    }

    return 0;
}