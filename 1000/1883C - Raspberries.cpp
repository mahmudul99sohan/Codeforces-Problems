#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n, k;
    cin >> n >> k;
    vector <int> v(n);
    int ans = 1e9;
    int even_cnt = 0; 
    for(int i = 0; i < n; i++) {
    	cin >> v[i];
    	if(v[i] % 2 == 0) {
    		even_cnt++;
    	}
    	if(v[i] % k == 0) {
    		ans = 0;
    	}
    	ans = min(ans, (k - (v[i] % k)));
    }

    if(k == 4) {
    	if(even_cnt >= 2) 
    	{
    		ans = min(ans, 0);
    	}
    	else if(even_cnt == 1) {
    		ans = min(ans, 1);
    	}
    	else if(even_cnt == 0) {
    		ans = min(ans, 2);
    	}
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