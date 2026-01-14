#include<bits/stdc++.h>
using namespace std;

void multiply(int n) {
    int twos = 0;
    int threes = 0;
    while(n%2==0) {
        twos++;
        n = n/2;
    }
    while(n%3==0) {
        threes++;
        n = n/3;
    }

    if(n!=1 || twos > threes) {
        cout << -1 << "\n";
        return;
    }
    cout << (threes - twos) + threes << "\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

     while (t--) {
        int n;
        cin >> n;
        multiply(n);

    }
    return 0;
}
 