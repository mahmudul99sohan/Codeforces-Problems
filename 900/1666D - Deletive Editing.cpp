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
    string s, t;
    cin >> s >> t;

    vector < vi > vv(26);

    for(int i = 0; i < s.size(); i++) {
    	vv[int(s[i] - 'A')].push_back(i);
    }

    map <int,int> mp;

    for(int i = 0; i < t.size(); i++) {
    	mp[int(t[i]- 'A')]++;
    }

    for(int i = 0; i < vv.size(); i++) {
    	sort(rall(vv[i]));
    	// cout << i + 1 << " : ";
    	// for(auto x : vv[i]) {
    	// 	cout << x << ' ';
    	// }
    	// cout << '\n';
    }

    vector <int> ans;
    for(auto [x,y] : mp) {
    	if(vv[x].size() < y) {
    		cout << "NO\n";
    		return;
    	}
    	for(int i = 0; i < y; i++) {
    		ans.push_back(vv[x][i]);
    	}
    }

    sort(all(ans));
    string ans_st = "";
    for(auto i : ans) {
    	ans_st += s[i];
    }
    // cout << ans_st << ' ';
    if(ans_st == t) {
    	cout << "YES\n";
    }
    else {
    	cout << "NO\n";
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