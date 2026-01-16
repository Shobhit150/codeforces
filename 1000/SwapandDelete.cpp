#include<bits/stdc++.h>
using namespace std;

int swapanddelete(string &s) {
    int n = s.size();
    vector<int> freq(2,0);
    for(char &c: s) {
        freq[c-'0']++;
    }
    string ans = "";

    for(char &c: s) {
        int curr = (c == '0') ? 1 : 0;
        if(freq[curr] == 0) {
            return (n-ans.size());
        }
        freq[curr]--;
        ans += (curr + '0');
    }
    return 0;  
     
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

     while (t--) {
        string s;
        cin >> s;
        cout << swapanddelete(s) << "\n";

    }
    return 0;
}
 