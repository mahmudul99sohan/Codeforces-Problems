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
    ll n, k, b, s;
    cin >> n >> k >> b >> s;
    ll mn = k * b;
    ll mx = (k * b) + (n  * (k - 1));
    if((s < mn) or (s > mx )) {
    	cout << "-1\n";
    }
    else {
        ll first = mn;
    	ll remain = s - (mn);
    	n--;
    	k--;
    	for(ll i = 0; i < n; i++) {
    		ll val = min(k, remain);
    		remain -= val;
    		cout << val << ' ';
    	}
        cout << first + remain << '\n';
    	// cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
   		// cout << t << " : ";
        solve();


    }
    return 0;
}