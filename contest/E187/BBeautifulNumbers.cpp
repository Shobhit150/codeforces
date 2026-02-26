#include<bits/stdc++.h>
using namespace std;

#define ll long long
void solve() {
    string n;
    cin >> n;
    vector<int> arr;
    int sum1 = n[0] - '0';
    
    for(int i=1;i<n.size();i++) {
        sum1 += (n[i] - '0');
        arr.push_back(n[i] - '0');
    }
    sort(arr.begin(), arr.end());
    int count = 0;
    while (sum1 >= 10 && !arr.empty()) {
        count++;
        sum1 -= arr.back();
        arr.pop_back();
    }

    vector<int> arr2;
    int sum2 = 1;
    for(int i=1;i<n.size();i++) {
        sum2 += (n[i] - '0');
        arr2.push_back(n[i] - '0');
    }
    sort(arr2.begin(), arr2.end());
    int count2 = 1;
    while (sum2 >= 10 && !arr2.empty()) {
        count2++;
        sum2 -= arr2.back();
        arr2.pop_back();
    }
    cout << min(count,count2) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}