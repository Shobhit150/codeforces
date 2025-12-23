#include<bits/stdc++.h>
using namespace std;

int longest(long long n) {
    bool flag = true;
    int i=1;
    
    while(i<=n && flag) {
       
        if((n%i) == 0) i++;
        else {
            flag = false;
        }
    }
    return i-1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        cout << longest(n) << endl;
    }

    return 0;
}