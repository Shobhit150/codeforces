#include<bits/stdc++.h>
using namespace std;

void monster(int n, int k, vector<pair<int,int>> &a) {
    sort(a.begin(), a.end());
    for(int i=0;i<n;i++) {
        cout << a[i].second + 1 << " ";
    }
    cout << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

     while (t--) {
        int n, k;
        cin >> n >> k;
        vector<pair<int,int>> a(n);
        for(int i=0;i<n;i++) {
            int c;
            cin >> c;
            // int remainder = c % k;
            // if(remainder == 0) remainder = k;
            a[i] = {{c%k}, i};
        }
        monster(n,k,a);

    }
    return 0;
}