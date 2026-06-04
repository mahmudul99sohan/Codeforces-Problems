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
    int n, q;
    cin >> n >> q;

    vector <int> v(51, n + 1);

    for(int i = 1; i <= n; i++) {
    	int x; cin >> x;
    	if(v[x] == n + 1) {
    		v[x] = i;
    	}
    }
    // for(int i = 1; i <= 50; i++) {
    // 	if(v[i] != n + 1) {
    // 		cout << i << ' ' << v[i] << '\n';

    // 	}
    		
    // }

    // return;

    for(int k = 0; k < q; k++) {
    	int q_color;
    	cin >> q_color;
    	
    	int ans = v[q_color];
    	
    	for(int colr = 1; colr <= 50; colr++) {
    		if(v[colr] < ans) {
    			v[colr]++;
    		}
    	}
    	v[q_color] = 1;
    	cout << ans << ' ';

    }
    cout << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
    
        solve();


    }
    return 0;
}