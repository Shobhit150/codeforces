#include<bits/stdc++.h>
using namespace std;

long long olyaandgamewitharrays(int n, vector<vector<int>> &a) {
    int miniIdx = 0;
    int miniFirst = 0;
    for(int i=0;i<n;i++) {
        if(a[i][1] < a[miniIdx][1]) {
            miniIdx = i;
        }
        // cout << "-->> " << miniFirst << " " << a[i][0] << " " << a[i][miniFirst] << endl;
        if(a[i][0] < a[miniFirst][0]) {
            miniFirst = i;
        }
    }
    // cout << "miniIdx " << miniIdx << endl;
    // cout << "miniFirst " << miniFirst << endl;
    long long ans = 0;
    for(int i=0;i<n;i++) {
        if(i == miniIdx) {
            ans += a[miniFirst][0];
        } else {
            ans += a[i][1];
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> a(n);
        for(int i=0;i<n;i++) {
            int m;
            cin >> m;
            vector<int> b(m);
            for(int j=0;j<m;j++) {
                cin >> b[j];
            }
            sort(b.begin(), b.end());
            a[i] = b;

        }
        cout << olyaandgamewitharrays(n,a) << "\n";

    }
    return 0;
}
 


#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;

// {
//     x :1,
//     y:1,
//     z:1
// }
// {
//     x:0,
//     y:1,
// }

// x y y z y z t x
// |
//   |
string getShortestUniqueSubstring( const vector<char>& arr, const string &str ) 
{
  // your code goes here
  unordered_set<int> set;
  int n = arr.size();
  vector<int> freq(128,0);
  for(int i=0;i<arr.size();i++) {
    set.insert(arr[i]);
  }

  int l = 0;
  int r = 0;
  
  while(r < str.size() && l < str.size()) {
    
    if(set.count(str[r]) && freq[str[r] - 'A'] == 0) {
        
        freq[str[r] - 'A']++;
        r++;
    } else {
        freq[str[r] - 'A']--;
        l++;
    }
    
    
    if(r-l+1 == n) {
        
        string ans = "";
        for(int i=0;i<n;i++) {
            ans += str[i+l];
        }
        return ans;
    }
    
  }
  return "";
}

int main() {
  return 0;
}