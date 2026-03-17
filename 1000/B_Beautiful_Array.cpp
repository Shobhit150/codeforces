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
    ll n,k,b,s;
    cin >> n >> k >> b >> s;
   
    ll per_value_high = (k*(b+1))-1;
    ll per_value_low = k-1;
    ll low_end = k*b;
    ll high_end = per_value_high + (per_value_low * (n-1));
    if(s < low_end || s > high_end) {
        cout << "-1\n";
    } else {
        cout << min(s,per_value_high) << " ";
        s -= min(s,per_value_high);
        for(int i=0;i<n-1;i++) {
            if(s==0) {
                cout << "0 ";
            } else {
                cout << min(s,per_value_low) << " ";
                s -= min(s,per_value_low);
            }
        }
        cout << "\n";
    }
}

int main() {
    fastio

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}