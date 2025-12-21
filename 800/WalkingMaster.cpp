#include<bits/stdc++.h>
using namespace std;

int walking(int a, int b, int c, int d) {
    int x = c - a;
    int y = d - b;
    if(x>y) return -1;
    if(y<0) return -1;
    return x + (y-x)*2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << walking(a,b,c,d) << endl;
        
    }

    return 0;
}