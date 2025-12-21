#include<bits/stdc++.h>
using namespace std;

int unitarray(int n, vector<int> &a) {
    int ones = 0;
    int neg_ones = 0;
    for(int i=0;i<n;i++) {
        if(a[i] == 1) ones++;
        else neg_ones++;
    }
    if(ones >= neg_ones) {
        if(neg_ones%2 == 0) {
            return 0;
        } else {
            return 1;
        }
    }
    int diff = (neg_ones - ones);
    int to_change = (diff + 1)/2;
    
    if((neg_ones - to_change) %2 == 0) {
        return to_change;
    }
    return to_change + 1;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i=0;i<n;i++) {
            cin >> a[i];
        }
        cout << unitarray(n,a) << endl;
        
    }

    return 0;
}