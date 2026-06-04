#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector <int>;
using vl = vector <ll>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

bool check(ll h, vl& corals, ll n, ll x) {
	ll sum = 0;

	for(int i = 0; i < n; i++) {
		if(corals[i] < h) {
			sum += (h - corals[i]);
		}
	}

	return sum <= x;
}


void solve() {
    ll n, x;
    cin >> n >> x;

    vector <ll> corals(n);

    for(int i = 0; i < n; i++) {
    	cin >> corals[i];
    }

    ll L = 1,  R = 1e10, ans = 0;

    while(L <= R) {
    	ll mid = L + ( R - L) / 2;
    	if(check(mid, corals, n, x)) {
    		ans = mid;
    		L = mid + 1;
    	
    	}
    	else {
    		R = mid - 1;
    	}
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