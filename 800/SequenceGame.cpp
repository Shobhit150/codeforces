#include<bits/stdc++.h>
using namespace std;

int sequence(int n, vector<int> &a) {
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n ;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << sequence(n,a) << endl;

        
    }

    return 0;
}
