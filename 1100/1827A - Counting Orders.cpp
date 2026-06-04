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
	ll mod = 1e9 + 7;
    int n;
    cin >> n;
    vector <int> a(n), b(n), ans(n);
    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
    	cin >> b[i];
    }
    sort(all(a));
    sort(all(b));

    for(int i = 0, j = 0; i < n; i++) {
    	if(a[j] > b[i]) {
    		if(j <= i) {
    			ans[i] = (i - j + 1);
    		}
    		else {
    			ans[i] = 0;
    		}
    	}
    	else {
    		j++;
    		while(a[j] <= b[i]) {
    			j++;
    		}
    		if(j <= i) {
    			ans[i] = (i - j + 1);
    		}
    		else {
    			ans[i] = 0;
    		}
    		
    	}
    }
    ll num_ways = 1;
    for(int i = 0; i < n; i++) {
    	// cout << ans[i] << ' ';
    	num_ways *= ans[i];
    	num_ways %= mod; 
    }

    cout << num_ways << '\n';



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