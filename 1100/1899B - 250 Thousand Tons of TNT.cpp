#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

const int N = 150000 + 1;

vector <int> Div[N];

void solve() {
    int n;
    cin >> n;
    vector <ll> a(n);

    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    }

    vector <ll> pref_sum(n + 1, 0);

    partial_sum(all(a), pref_sum.begin() + 1);
    ll ans = -1e18;
    for(auto k : Div[n]) {
    	// cerr << k << ' ';
    	ll mn = 1e18;
    	ll mx = -1e18;

    	for(int i = 0; i + k <= n; i += k) {
    		ll range_sum = pref_sum[i + k] - pref_sum[i];
    		mn = min(mn, range_sum);
    		mx = max(mx, range_sum);
    	}

    	ans = max(ans, abs(mx - mn));
    }

    cout << ans << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    for(int i = 1; i < N; i++) {
    	for(int j = i; j < N; j += i) {
    		Div[j].push_back(i);
    	}
    }

    int t = 1;
    cin >> t;
    while (t--) {
    
        solve();


    }
    return 0;
}