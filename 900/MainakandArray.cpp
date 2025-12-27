#include<bits/stdc++.h>
using namespace std;

void mainakAndArray(int n, vector<int> &a) {
    int maxi = a[n-1] - a[0];
    for(int i=0;i<n;i++) {
        if(i != 0) {
            maxi = max(maxi, a[i] - a[0]);
        }
        if(i != n-1) {
            maxi = max(maxi, a[n-1] - a[i]);
        }
        if(i != n-1) {
            maxi = max(maxi, a[i] - a[i+1]);
        }
    }
    cout << maxi << endl;
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
        for(int i=0;i<n;i++ ){
            cin >> a[i];
        }
        
        mainakAndArray(n,a);

    }
    return 0;
}
