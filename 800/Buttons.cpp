#include<bits/stdc++.h>
using namespace std;

bool button(int a, int b, int c) {
    if(c%2 == 0) {
        if(a > b) return true;
        return false;
    } else {
        if(a >= b) return true;
        return false;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a,b,c;
        cin >> a >> b >> c;
        if(button(a,b,c)) {
            cout << "First" << endl;
        } else {
            cout << "Second" << endl;
        }
    }

    return 0;
}
