#include<bits/stdc++.h>
using namespace std;

void game(string &s) {
    int ones = 0;
    int zeros = 0;
    for(char &c: s) {
        if(c=='1') {
            ones+=1;
        } else {
            zeros+= 1;
        }
    }
    int mini = min(zeros, ones);
    if(mini%2==0) {
        cout << "NET\n";
    } else {
        cout << "DA\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

     while (t--) {
        string s;
        cin >> s;
        game(s);

    }
    return 0;
}
 