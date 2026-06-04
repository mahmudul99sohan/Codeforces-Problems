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
    string s;
    cin >> s;
    vector <int> v;
    int len_3_or_gater = 0;
    for(int i = 0; i < n; i++) {
    	int c = 0;
    	bool flag = false;
    	while(s[i] == '.' and i < n) {
    		c++;
    		i++;
    		flag = true;
    	}
    	if(c) {
    		v.push_back(c);
    		if(c >= 3) {
    			len_3_or_gater++;
    		}
    	}
    	if(flag) {
    		i--;
    	}
    }

    int ans = 0;
    if(len_3_or_gater > 0) {
    	cout << "2\n";
    }
    else {
    	for(auto x : v) {
	    	if(x <= 2) {
	    		ans += x;
	    	}
	    	else if(x % 2) {
	    		ans += ((x + 1) / 2);
	    	}
	    	else{
	    		ans += (x / 2);
	    	}
		}	

    	cout << ans << '\n';
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