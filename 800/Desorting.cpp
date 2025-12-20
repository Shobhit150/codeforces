#include<bits/stdc++.h>
using namespace std;

int desorting(int n, vector<int> &a) {
    int mini = INT_MAX;
    for(int i=1;i<n;i++) {
        if(a[i] < a[i-1]) return 0;
        mini = min(mini, a[i] - a[i-1]);
    }
    return mini/2 + 1;
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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << desorting(n,a) << endl;

        
    }

    return 0;
}
