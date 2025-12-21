#include<bits/stdc++.h>
using namespace std;

bool blank(long long n, long long k) {
    if(n%2==0) return true;
    
    if(k%2==0) return false;
    return true;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;
        if(blank(n,k)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }

        
    }

    return 0;
}
