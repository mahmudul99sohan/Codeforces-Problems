#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    ll n;
    cin >> n;

    vector <ll> a(n);

    for(ll i = 0; i < n; i++) {
    	cin >> a[i];
    }

    ll current_sum = 0;
    ll ans = -2e9;

    for(ll i = 0; i < n; i++) {
    	current_sum += a[i];

    	ans = max(ans, current_sum);

    	

    	if( i < n - 1 && !((a[i] ^ a[i + 1]) & 1)) {
    		current_sum = 0;
    		// cerr << "parity : ";
    	}

    	if(current_sum < 0) {
    		current_sum = 0;
    		// cerr << "Sum Negative ";
    	}

    	// cerr << current_sum << ' ' << ans << '\n';

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