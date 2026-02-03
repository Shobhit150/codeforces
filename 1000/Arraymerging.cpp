#include<bits/stdc++.h>
using namespace std;

#define ll long long
void arraymerging(int n, vector<int> &a, vector<int> &b) {
    unordered_map<int, int> map;
    int curr = 1;
    int maxi = 0;
    for(int i=0;i<n;i++) {
        if(i != 0) {
            if(a[i] == a[i-1]) {
                curr++;
            } else {
                curr = 1;
            }
        }
        
        map[a[i]] = max(map[a[i]], curr);
        maxi = max(maxi, curr);
    }
    curr = 1;
    for(int i=0;i<n;i++) {
        if(i != 0) {
            if(b[i] == b[i-1]) {
                curr++;
            } else {
                curr = 1;
            }
        }
    
        maxi = max(maxi, map[b[i]] + curr);
    }
    cout << maxi << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

     while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i=0;i<n;i++) {
            cin >> a[i];
        }
        for(int i=0;i<n;i++) {
            cin >> b[i];
        }
        arraymerging(n,a,b);

    }
    return 0;
}