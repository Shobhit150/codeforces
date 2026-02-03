#include<bits/stdc++.h>
using namespace std;

#define ll long long
void distinctsplit(int n, string &s) {
    vector<int> freq(26,0);
    int maxi = 0;
    int right = 0;
    for(int i=0;i<n;i++) {
        if(freq[s[i] - 'a'] == 0) {
            right++;
        }
        freq[s[i] - 'a']++;
    }
    int left = 0;
    vector<int> freq2(26,0);
    for(int i=0;i<n;i++) {
        if((freq2[s[i] - 'a']) == 0) {
            left++;
        }
        freq2[s[i] - 'a']++;
        freq[s[i] - 'a']--;
        if(freq[s[i] - 'a'] == 0) {
            right--;
        }
        maxi = max(maxi, right + left);
    }
    cout << maxi << "\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

     while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        distinctsplit(n,s);

    }
    return 0;
}
