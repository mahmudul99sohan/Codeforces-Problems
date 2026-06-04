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
    ll xo, n;
    cin >> xo >> n;
    if(n == 0) {
    	cout << xo << '\n';
    	return;
    }
    if(xo & 1) {
    	xo++;
    	n--;
    	ll tm = n / 4;
    	xo += (tm * 4);
    	if(n % 4 != 0) {
    		ll rem = n % 4;
    		if(rem == 3) {
    			xo += (n + 1);
    			xo -= (n);
    			xo -= (n - 1);
    		}
    		else if(rem == 2) {
    			xo -= (n + 1);
    			xo -= (n);
    		}
    		else if(rem == 1) {
    			xo -= (n + 1);
    		}
    	}
    	cout << xo << '\n';
    }
    else {
    	xo--;
    	n--;
    	ll tm = n / 4;
    	xo -= (tm * 4);
    	if(n % 4 != 0) {
    		ll rem = n % 4;
    		if(rem == 3) {
    			xo -= (n + 1);
    			xo += (n);
    			xo += (n - 1);
    		}
    		else if(rem == 2) {
    			xo += (n + 1);
    			xo += (n);
    		}
    		else if(rem == 1) {
    			xo += (n + 1);
    		}
    	}
    	cout << xo << '\n';
    }
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