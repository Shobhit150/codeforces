#include<bits/stdc++.h>
using namespace std;

void avto(long long n) {
    if(n%2==1) {
        cout << -1 << endl;
        return;
    }
    long long mini = LLONG_MAX;
    long long maxi = LLONG_MIN;
    if(n%4 == 0) {
        maxi = n/4;
        int rem = n%6;
        if(rem == 0) {
            mini = n/6;
        } else if(rem == 2) {
            mini = (n/6) - 1 + 1;
        } else {
            mini = (n/6) + 1;
        }
    } else if(n%6 == 0) {
        mini = n/6;
        int rem = n%4;
        if(rem == 0) {
            maxi = n/4;
        } else {
            maxi = (n/4) - 2 + 1;
        }
    } else {
        int rem = n%6;
        if(rem == 0) {
            mini = n/6;
        } else if(rem == 2) {
            mini = (n/6) - 1 + 1;
        } else {
            mini = (n/6) + 1;
        }

        int rem2 = n%4;
        if(rem2 == 0) {
            maxi = n/4;
        } else {
            maxi = (n/4) - 2 + 1;
        }
    }
    cout << mini << " " << maxi << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        avto(n);

    }
    return 0;
}
