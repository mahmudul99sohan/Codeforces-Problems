#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n;
    cin >> n;
    vector <int> v(n);
    int mn = 100000, mx = 0;
    for(int i = 0; i < n; i++) {
    	cin >> v[i];
    	mn = min(mn, v[i]);
    	mx = max(mx, v[i]);
    }
    if(mn == v[0] and mx == v[n - 1]) {
    	cout << mx - mn << '\n';
    	return; 
    }
    else if(mn == v[0] and mx != v[n - 1]) {
    	cout << mx - mn << '\n';
    	return; 
    }
    else if(mn != v[0] and mx == v[n - 1]) {
    	cout << mx - mn << '\n';
    	return; 
    }
    else {
    	int dif_max = v[n - 1] - v[0];
    	dif_max = max(dif_max, (v[n - 1] - mn));
    	dif_max = max(dif_max, (mx - v[0]));
    	for(int i = 0; i < n - 1; i++) {
	    	dif_max = max(dif_max, (v[i] - v[ i + 1]));
	    }
	    cout << dif_max << '\n';
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