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
    map <int,int> mp;
    for(int i = 0; i < n; i++) {
    	cin >> v[i];
    	mp[v[i]]++;
    }

    vector < pii > vp;

    for(auto [x,y] : mp) {
    	vp.push_back({y,x});
    }


    sort(rall(vp));

    auto it_1 = *(vp.begin());
    auto it_2 = *(++vp.begin());

    if(mp.size() == 1 or mp.size() == n or it_1.first < 2 or it_2.first < 2) {
    	cout << "-1\n";
    	return;
    }
    // cout << it_1.first << ' ' << it_1.second << '\n';
    // cout << it_2.first << ' ' << it_2.second << '\n';

    vector <int> ans(n, -1);
    int cnt = 0;
    for(int i = 0; i < n; i++) {
    	if(v[i] == it_1.second) {
    		if(cnt == 0) {
    			ans[i] = 1;
    		}
    		else {
    			ans[i] = 2;
    		}
    		cnt++;
    	}
    }

    // for(int i = 0; i < n; i++) {
    // 	cout << ans[i] << ' ';
    // }
    // cout << '\n';

	cnt = 0;
    for(int i = 0; i < n; i++) {
    	if(v[i] == it_2.second) {
    		if(cnt == 0) {
    			ans[i] = 1;
    		}
    		else {
    			ans[i] = 3;
    		}
    		cnt++;
    	}
    }

    for(int i = 0; i < n; i++) {
    	if(ans[i] == -1) {
    		ans[i] = 3;
    	}
    }

   

    for(int i = 0; i < n; i++) {
    	cout << ans[i] << ' ';
    }
    cout << '\n';
    return;

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