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

    vector <int> a(n), b, c;
    int mx = 0, mn = 1e9 + 5;
    int frq_mx = 0;
    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    	mx = max(mx, a[i]);
    	mn = min(mn, a[i]);
    }
    if(mx == mn) {
    	cout << "-1\n";
    }
    else {

    	sort(all(a));

    	for(int i = 0; i < n; i++) {
	    	if(mx != a[i]) {
	    		b.push_back(a[i]);
	    	}
	    	else {
	    		c.push_back(a[i]);

	    	}
	    }

    	cout << b.size() << ' ' << c.size() << '\n';

    	for(auto x : b) {
	    	cout << x << ' ';
	    }
	    cout << '\n';

    	for(auto x : c) {
	    	cout << x << ' ';
	    }
	    cout << '\n';


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