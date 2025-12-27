#include<bits/stdc++.h>
using namespace std;

int nitDestroyTheUniverse(int n, vector<long long> &a) {
    int i = 0;
    while(i<n && a[i] == 0) i++;
    if(i==n) return 0;

    while(i<n) {
        if(a[i]==0) {
            break;
        }
        i++;
    }
    while(i<n) {
        if(a[i] != 0) return 2;
        i++;
    }
    return 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i=0;i<n;i++ ){
            cin >> a[i];
        }
        
        cout << nitDestroyTheUniverse(n,a) << endl;

    }
    return 0;
}
