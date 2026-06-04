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
    string s;
    cin >> s;
    ll n = s.size();
    ll cnt_one = count(all(s), '1');
    // cout << cnt_one << '\n';
    if(cnt_one == n) {
    	cout << n * n << '\n';
    	return;
    }
    if(cnt_one == 0) {
    	cout << 0 << '\n';
    	return;
    }
    string new_s = "";
    if(s[0] == '1' and s[n - 1] == '1') {
    	int i = n - 1;
    	while(s[i] == '1') {
    		new_s += '1';
    		i--;
    		s.pop_back();
    	}
    	new_s += s;
    	s = new_s;
    }

    ll cons_one = 0;
    for(int i = 0; i < n; i++) {
    	ll c = 0;
    	// bool f = 0;
    	while(s[i] == '1') {
    		c++;
    		i++;
    		// f = 1;
    	}
    	 cons_one = max(cons_one, c);
    	 // if(f) {
    	 // 	i--;
    	 // }

    }
    ll ans = 0;
    for(ll i = 1; i <= (cons_one + 2 -1) / 2; i++) {
    	ll tm = (i * (cons_one - i + 1));
    	ans = max(ans, tm);
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