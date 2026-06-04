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
    string s1, s2;
    cin >> s1 >> s2;

    int n1 = s1.size(), n2 = s2.size();

    if(n1 > n2) {
    	swap(s1,s2);
    	swap(n1,n2);
    }
    // cout << s1 << ' ' << s2 << '\n';
    // cout << n1 << ' ' << n2 << '\n';
    int ans = 100;
    for(int i = 1; i <= n1; i++) {
    	for(int j = 0; j < n1; j++) {
    		string sub1 = s1.substr(j, i);

    		for(int k = 0; k < n2; k++) {
    			string sub2 = s2.substr(k, i);

    			if(sub1 == sub2) {
				    // cout << sub1 << ' ' << sub2 << '\n';
    				int tm = abs(n1 - (int)sub1.size()) + abs(n2 - (int)sub2.size());
    				// cout << tm << '\n';
    				ans = min(ans, tm);
    			}
    		}
    	}
    }

    if(ans > 40) {
    	ans = n1 + n2;
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