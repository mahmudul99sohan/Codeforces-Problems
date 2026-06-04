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
    ll w, h;
    cin >> w >> h;
    int tm = 2;
    ll ans = -1e7;
    while(tm--) {
    	int k;
    	cin >> k;
    	ll mn = 1e7, mx = 0;
    	while(k--) {
    		ll x;
    		cin >> x;
    		mn = min(mn, x);
    		mx = max(mx, x);
    	}
    	ans = max((abs(mx - mn) * h), ans);
    	// cout <<  << '\n';
    }
    tm = 2;
    while(tm--) {
    	int k;
    	cin >> k;
    	ll mn = 1e7, mx = 0;
    	while(k--) {
    		ll x;
    		cin >> x;
    		mn = min(mn, x);
    		mx = max(mx, x);
    	}
    	ans = max((abs(mx - mn) * w), ans);

    	// cout << abs(mx - mn) * w << '\n';
    }
    	cout << ans << '\n';

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