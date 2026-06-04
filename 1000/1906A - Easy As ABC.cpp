#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()\


bool is_OK(pii a , pii b) {
	if(a == b) return false;
	return ((abs(a.first - b.first) <= 1) and (abs(a.second - b.second) <= 1));
}

void solve() {
    vector <string> s(3);
    for(int i = 0; i < 3; i++) {
    	cin >> s[i];
    }
    string one_d_s = "";
    vector < pii > adj_index;
    for(int i = 0; i < 3; i++) {
    	for(int j = 0; j < 3; j++) {
	    	one_d_s += s[i][j];
	    	adj_index.push_back({i,j});
	    }
    }
    // cout << one_d_s << '\n';
    // for(auto x : adj_index) {
    // 	cout << x.first << ' ' << x.second << '\n';
    // }
    string ans = "CCC";
    for(int i = 0; i < 9; i++) {
    	for(int j = 0; j < 9; j++) {
	    	for(int k = 0; k < 9; k++) {
		    	if(is_OK(adj_index[i], adj_index[j]) and is_OK(adj_index[j], adj_index[k]) and i != j  and j != k and k != i) {
		    		string temp = "";
		    		temp += one_d_s[i];
		    		temp += one_d_s[j];
		    		temp += one_d_s[k];

		    		ans = min(temp, ans);
		    	}
		    }
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