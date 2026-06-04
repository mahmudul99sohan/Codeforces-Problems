#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector <int>;
using vl = vector <ll>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

bool check_sub_string(string s, string x) {
	int n = x.size();
	int m = s.size();
	for(int i = 0; i <= n - m; i++) {
		if(x.substr(i, m) == s) {
			return true;
		}
	}
	return false;
}

void solve() {
    int n, m;
    cin >> n >> m;

    string x, s;
    cin >> x >> s;

    int c = 5;
    int cnt = 0;
    if(check_sub_string(s, x)) {
    	cout << cnt << '\n';
    	return;
    }
    while(c--) {
    	cnt++;
    	x += x;
    	if(check_sub_string(s, x)) {
    		cout << cnt << '\n';
    		return;
    	}
    }

    cout << "-1\n";
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