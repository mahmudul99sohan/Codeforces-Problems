#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n, c, d;
    cin >> n >> c >> d;
    map <int,int> mp;
    long long min_ele = 1e10;
    for(int i = 0; i < n * n; i++) {
    	int x; cin >> x;
    	min_ele = min(1ll * x, min_ele);
    	mp[x]++;
    }
    vector <int> row(n);
    row[0] = min_ele;
    for(int i = 1; i < n; i++) {
    	row[i] = row[i - 1] + c;
    }

    for(int i = 0; i < n; i++) {
    	vector <int> col(n);
    	col[0] = row[i];
    	for(int j = 1; j < n; j++) {
    		col[j] = col[j - 1] + d;
    		mp[col[j]]--;

    		if(mp[col[j]] == 0) {
    			mp.erase(col[j]);
    		}
    	}
    	mp[col[0]]--;

		if(mp[col[0]] == 0) {
			mp.erase(col[0]);
		}

    }

    if(mp.size() == 0) {
    	cout << "YES\n";
    }
    else {
    	cout << "NO\n";
    }
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