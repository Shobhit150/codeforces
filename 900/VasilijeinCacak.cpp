#include<bits/stdc++.h>
using namespace std;

bool vasilije(long long n, long long k, long long x) {
    long long mini = k*(k+1)/2;

    long long maxi = (n*(n+1)/2) - (((n-k) * (n-k+1)/2));
    
    return (x >= mini && x<= maxi);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;
        if(vasilije(n,k,x)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
