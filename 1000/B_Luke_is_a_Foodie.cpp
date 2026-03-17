#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << (x) << endl;
#else
#define debug(x)
#endif

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

ll mod_add(ll a, ll b) { return (a % MOD + b % MOD) % MOD; }
ll mod_sub(ll a, ll b) { return (a % MOD - b % MOD + MOD) % MOD; }
ll mod_mul(ll a, ll b) { return (a % MOD * b % MOD) % MOD; }

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }

    int L = a[0] - x;
    int R = a[0] + x;
    int count = 0;

    for(int i=0;i<n;i++) {
        int newL = a[i] - x;
        int newR = a[i] + x;
        if(newL <= R && newR >= L) {
            L = max(L, newL);
            R = min(R, newR);
        } else {
            L = a[i] - x;
            R = a[i] + x;
            count++;
        }
    }
    cout << count << "\n";

}

int main() {
    fastio

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}