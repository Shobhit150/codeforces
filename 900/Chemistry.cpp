#include<bits/stdc++.h>
using namespace std;

int chemist(int n, int k, string s) {
    unordered_map<char,int> m;
    for(char &c: s) {
        m[c]++;
    }
    int count = 0;
    for(auto [c, freq]: m) {
        if(freq%2==1) {
            count++;
        }
    }
    int remaining = (count - k);
    if(remaining <= 1) return true;
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if(chemist(n,k,s)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
