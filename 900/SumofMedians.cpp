#include<bits/stdc++.h>
using namespace std;

bool oddDivisor(long long n) {
    int count = 0;
    while(n) {
        n = n & (n-1);
        count++;
        if(count > 1) return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        
        if(oddDivisor(n)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }

    }
    return 0;
}
