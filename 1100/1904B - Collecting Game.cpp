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
    vector <ll> a(n), b(n);

    for(ll i = 0; i < n; i++) {
    	cin >> a[i];
    	b[i] = a[i];
    }

    sort(all(b));

    vector <ll> prefix_sum(n);

    prefix_sum[0] = b[0];
    map <ll,ll> mp;
    mp[b[0]] = b[0];
    for(ll i = 1; i < n; i++) {
    	prefix_sum[i] = prefix_sum[i - 1] + b[i];
    	mp[b[i]] = max(prefix_sum[i], mp[b[i]]);
    }

    // for(auto [x,y] : mp) {
    // 	cout << x << ' ' << y << '\n';
    // }



    map <ll,ll> mp_ans;

    for(ll i = 0; i < n; i++) {
    	int j = i + 1;
    	while(j < n and mp[b[i]] >= b[j]) {
    		mp[b[i]] += b[j];
    		j++;
    	}
    	auto ub = lower_bound(all(b),mp[b[i]]);

    	mp_ans[b[i]] = (ub - b.begin());

    }

    for(ll i = 0; i < n; i++) {
    	cout << mp_ans[a[i]] << ' ';

    }
    cout << '\n';




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