#include<iostream>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    string s2 = s;

    for(int i=1;i<n-1;i++) {
        if(s[i-1] == '1' && s[i+1] == '1') {
            s[i] = '1';
        }
    }
    int maxi = 0;
    for(int i=0;i<n;i++) {
        if(s[i] == '1') {
            maxi++;
        }
    }

    for(int i=1;i<n-1;i++) {
        if(s[i-1] == '1' && s[i+1] == '1') {
            s[i] = '0';
        }
    }

    int mini = 0;
    for(int i=0;i<n;i++) {
        if(s[i] == '1') {
            mini++;
        }
    }
    // cout << s << " " << s2 << "\n";
    cout << mini << " " << maxi << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}