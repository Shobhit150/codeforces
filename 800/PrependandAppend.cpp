#include<bits/stdc++.h>
using namespace std;

vector<int> sequence(int n, vector<int> &a) {
    vector<int> b;
    b.push_back(a[0]);
    for(int i=1;i<n;i++) {
        if(a[i] < a[i-1]) {
            b.push_back(a[i]);
            b.push_back(a[i]);
        } else {
            b.push_back(a[i]);
        }
    }
    return b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        

        
    }

    return 0;
}
