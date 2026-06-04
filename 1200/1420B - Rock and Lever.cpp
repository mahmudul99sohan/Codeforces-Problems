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

    vector <ll> a(n);

    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    }

    map <ll,ll> mp;

    for(int i = 0; i < n; i++) {
    	int msb = 0;
    	for(int k = 0; k <= 31; k++) {
    		if((a[i] >> k)  & 1) {
    			msb = k;
    		}
    	}
    	mp[msb]++;
    }

    ll cnt = 0;

    for(auto [x, y] : mp) {
    	// y--;
    	// cout << x << ' ' << y << '\n';
    	while(y--) {
    		cnt += y;
    	}
    }

    cout << cnt << '\n';

    
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