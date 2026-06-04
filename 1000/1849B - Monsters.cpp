#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

bool cmp (pii a, pii b) {
	auto [x1,y1] = a;
	auto [x2,y2] = b;
	if(x1 != x2) {
		return (x1 > x2);
	}
	return (y1 < y2);
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector <int> a(n);
    vector < pii > v;
    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    	// v.push_back({a[i], i + 1});
    }

    for(int i = 0; i < n; i++) {
    	if(a[i] % k == 0) {
    		a[i] = k;
    	}
    	else {
    		a[i] = a[i] % k;
    	}
    	v.push_back({a[i], i + 1});
    }

    sort(all(v),cmp);

    for(auto [x, y] : v) {
    	cout << y << ' ';
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