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
    int n, m;
    cin >> n >> m;
    int ans = 0;
    vector <int> rem_frq(m);
    for(int i = 0; i < n; i++) {
    	int x; cin >> x;
		rem_frq[x % m]++;
    }


    for(int i = 0; i < m; i++) {
    	int x = rem_frq[i], y = rem_frq[(m - i) % m];
    	if(x == 0 and y == 0) continue;
    	int tm = min(x, y);

    	x -= min(tm + 1, x);
    	y -= min(tm + 1, y);

    	ans++;

    	ans += (x + y);

    	rem_frq[i] = 0;
    	rem_frq[(m - i) % m] = 0;

    }

    // cout << ans << '\n';



    

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