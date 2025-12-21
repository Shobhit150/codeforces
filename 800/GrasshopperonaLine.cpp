#include<bits/stdc++.h>
using namespace std;

void grasshopper(int n, int k, vector<int> &a) {
    if(n%k==0) {
        a.push_back(n-1);
        a.push_back(1);
        return;
    } else {
        a.push_back(n);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n,k,x;
        cin >> n >> k;

        vector<int> a;
        grasshopper(n,k,a);
        cout << a.size() << endl;
        for(int i=0;i<a.size();i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}