#include<bits/stdc++.h>
using namespace std;

#define ll long long
void minimumlcm(int n) {
    int maxA = 1;
    for(int i=1;i*i <= n;i++) {
        if(n%i == 0) {
            int a = i;
            int b = n/i;
            if(a <= n/2)maxA = max(a, maxA);
            if(b <= n/2)maxA = max(b, maxA);
        }
    }
    cout << maxA << " " << (n-maxA) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

     while (t--) {
        int n;
        cin >> n;
        
        minimumlcm(n);

    }
    return 0;
}