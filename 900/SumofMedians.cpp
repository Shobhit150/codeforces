#include<bits/stdc++.h>
using namespace std;

long long sumOfMedian(int n, int k, vector<long long>& a) {
    long long gap = n/2;
    long long j = (n*k) - gap - 1;
    long long sumi = 0;
    for(int i=0;i<k;i++) {
        sumi += a[j];
        
        j -= (gap + 1);
    }
    return sumi;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

     while (t--) {
        int n, k;
        cin >> n >> k;
        vector<long long> a(n*k);
        for(int i=0;i<(n*k);i++) {
            cin >> a[i];
        }
        cout << sumOfMedian(n,k,a) << "\n";

    }
    return 0;
}
