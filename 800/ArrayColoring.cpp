#include<bits/stdc++.h>
using namespace std;

bool color(int n, vector<int> a) {
    int summ = 0;
    for(int i=0;i<n;i++) {
        summ += a[i];
    }
    if(summ %2 == 0) {
        return true;
    } 
    return false;
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
        if(color(n, a)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }


    }

    return 0;
}
