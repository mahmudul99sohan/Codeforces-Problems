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
    if(((n % 6) % 2 == 1) or  ((n % 4) % 2 == 1) or n == 2) {
    	cout << "-1\n";
    }
    else if( n % 6 == 0 and n % 4 == 0) {
    	cout << n / 6 << ' ' << n / 4 << '\n';
    }
    else {
    	ll mn = n / 6;
    	ll mx = n / 4;
    	if(n % 6 == 2 or n % 6 == 4) {
    		mn++;
    	}
    	
    	// if(n % 4 == 2) {
    	// 	mx--;
    	// }
    	cout << mn << ' ' << mx << '\n';
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