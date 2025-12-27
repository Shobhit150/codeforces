#include<bits/stdc++.h>
using namespace std;

void notDividing(int n, vector<int> &a) {
    for(int i=0;i<n;i++) {
        if(a[i] == 1) {
            a[i] += 1;
        }
    }
    for(int i=0;i<n-1;i++) {
        if(a[i+1]%a[i] == 0) {
            a[i+1] += 1;
        }
    }
    for(int i=0;i<n;i++) {
        cout << a[i] << " ";
    }
    cout << endl;
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
        
        notDividing(n,a);

    }
    return 0;
}
