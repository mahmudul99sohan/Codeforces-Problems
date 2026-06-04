#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n, d;
    cin >> n >> d;
    vector <int> v(n);
    for(int i = 0; i < n; i++) {
    	cin >> v[i];
    }
    // for(int i = 0; i < n; i++) {
    // 	cout << v[i] << ' ';
    // }
    // cout << '\n';

    sort(all(v));
    int cnt = 0;
    int ans = 0;
    for(int i = n - 1; i >= 0 and cnt < n; i--) {
    	int a = (v[i] + d) / v[i];
    	cnt += a;
    	if(cnt <= n) {
    		ans++;
    	}
    	else {
    		break;
    	}
    	
    }

    cout << ans << '\n';

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