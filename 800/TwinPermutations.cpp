#include<bits/stdc++.h>
using namespace std;

void unitarray(int n, vector<int> &a, vector<int> &b) {
    for(int i=0;i<n;i++) {
        b[i] = n - a[i] + 1;
    }
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
        vector<int> b(n);
        unitarray(n,a,b);
        for(int i=0;i<n;i++) {
            cout << b[i] << " ";
        }
        cout << endl;
        
    }

    return 0;
}