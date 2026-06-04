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
    int n;
    cin >> n;

    vector <int> a(n);
    map <int,int> mp;
    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    	mp[a[i]] = i + 1;
    }

    vector <int> v;
    for(auto [k1, v1] : mp) {
    	v.push_back(k1);
    }

    int len = v.size();
    int ans = -1;
    for(int i = 0; i < len; i++) {
    	for(int j = i ; j < len; j++) {
    		if(gcd(v[i], v[j]) == 1) {
    			int tm = mp[v[i]] + mp[v[j]];
    			ans = max(ans, tm);
    		}
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