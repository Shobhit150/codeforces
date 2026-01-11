#include<bits/stdc++.h>
using namespace std;

pair<long long,long long> strangePartition(long long n, long long x, vector<long long> &a) {
    long long sum = 0;
    long long maxi = 0;
    for(int i=0;i<n;i++) {
        sum += a[i];
        maxi += (a[i] + x -1) /x;
    }
    long long mini = (sum+x-1)/x;
    return {mini, maxi};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, x;
        cin >> n >> x;
        vector<long long> a(n);
        for(int i=0;i<n;i++) {
            cin >> a[i];
        }
        
        auto [c,d] = strangePartition(n,x,a);
        cout << c << " " << d << "\n";
    }
    return 0;
}
