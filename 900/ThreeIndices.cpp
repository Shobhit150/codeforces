#include<bits/stdc++.h>
using namespace std;

void threeIncides(int n, vector<int>& a) {
    for(int i=1;i<n-1;i++) {
        if(a[i-1] < a[i] && a[i] > a[i+1]) {
            cout << "YES" << "\n";
            cout << i << " " << i+1 << " " << i+2 << "\n";
            return;
        }
    }
    cout << "NO" << "\n";
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
        threeIncides(n,a);

    }
    return 0;
}
 