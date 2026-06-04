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
    ll n; cin >> n;

    for(ll i = n; i <= (ll)1e18; i++) {
    	vector <int> div;
    	ll tm = i;
    	while(tm != 0) {
    		ll rem = tm % 10;
    		tm /= 10;
    		if(rem != 0) {
    			div.push_back(rem);
    		}
    	}
    	int c = 0;
    	for(auto d : div) {
    		if(i % d == 0) {
    			c++;
    		}
    	}

    	if(c == div.size()) {
    		cout << i << '\n';
    		return;
    	}
    }
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