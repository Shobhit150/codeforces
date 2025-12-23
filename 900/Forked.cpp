#include<bits/stdc++.h>
using namespace std;

int fork(int a, int b, int xk, int yk, int xq, int yq) {
    vector<pair<int,int>> knight_moves = {
        {a, b}, {a, -b}, {-a, b}, {-a, -b},
        {b, a}, {b, -a}, {-b, a}, {-b, -a}
    };
    set<pair<int,int>> king_attack;
    set<pair<int,int>> queen_attack;
    for(auto [x,y]: knight_moves) {
        king_attack.insert({xk+x, yk+y});
    }
    for(auto [x,y]: knight_moves) {
        queen_attack.insert({xq+x, yq+y});
    }
    int count=0;
    for(auto [x,y]: king_attack) {
        if(queen_attack.count({x,y})) {
            count++;
        }
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a, b;
        int xk, yk;
        int xq, yq;
        cin >> a >> b;
        cin >> xk >> yk;
        cin >> xq >> yq;
        cout << fork(a,b,xk,yk,xq,yq) << endl;
        
    }

    return 0;
}
