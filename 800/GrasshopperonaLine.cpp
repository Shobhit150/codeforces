#include<bits/stdc++.h>
using namespace std;

bool forbidden(int n, int k, int x, vector<int> &a) {
    if(x==1) {
        if(k<2) return false;
        if(n%2==0) {
            if(k<2) return false;
            for(int i=0;i<(n/2);i++) {
                a.push_back(2);
            }
            return true;
        } else {
            if(k<3) return false;
            a.push_back(3);
            for(int i=0;i<(n-3)/2;i++) {
                a.push_back(2);
            }
            return true;
        }
    }
   
    for(int i=0;i<n;i++) {
        a.push_back(1);
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n,k,x;
        cin >> n >> k >> x;

        vector<int> a;
        if (forbidden(n,k,x,a)) {
            cout << "Yes" << endl;
            cout << a.size() << endl;
            for(int i=0;i<a.size();i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
