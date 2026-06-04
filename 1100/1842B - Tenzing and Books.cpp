#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector <int>;
using vl = vector <ll>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n, x;
    cin >> n >> x;
    vector < vector <int> > v;

    for(int i = 0; i < 3; i++) {
    	vector <int> tm;
    	for(int j = 0; j < n; j++) {
    		int x; cin >> x;
    		tm.push_back(x);
    	}
    	v.push_back(tm);
    }
    int total = 0;
    for(int i = 0; i < 3; i++) {
        int temp = 0;
        for(int j = 0; j < n; j++) {
            temp |= v[i][j];
            if((temp|x) != x) {
                break;
            }
            total |= v[i][j];
        }
        
    }

    cout << (total == x ? "YES\n" : "NO\n");





}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
    
        solve();


    }
    return 0;
}