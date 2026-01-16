#include<bits/stdc++.h>
using namespace std;

long long helmetinthenightlight(int n, int k, vector<int> &a, vector<int> &b) {
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
    for(int i=0;i<n;i++) {
        pq.push({b[i], a[i]});
    }
    
    int total = 1;
    long long totalcost = k;
    while(!pq.empty() && total < n && pq.top().first < k) {
        auto [cost, capacity] = pq.top();
        pq.pop();
        int toAdd = min(capacity, n-total);
        totalcost += 1LL * toAdd * cost;
        total += toAdd;
    }
    if(total < n) {
        totalcost += 1LL * (n-total) * k;
    }
    return totalcost;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

     while (t--) {
        int n, p;
        cin >> n >> p;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++) {
            cin >> a[i];
        }
        for(int i=0;i<n;i++) {
            cin >> b[i];
        }
        cout << helmetinthenightlight(n,p,a,b) << "\n";

    }
    return 0;
}
 