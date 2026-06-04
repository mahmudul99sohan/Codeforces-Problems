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
    int n, l, r;
    cin >> n >> l >> r;

    vector <int> a(n + 1, -1);

    for(int i = 1; i <= n; i++) {
    	int tm = l / i;
    	tm *= i;
    	if(tm >= l and tm <= r) {
    		a[i] = tm;
    	}
    	else {
    		tm += i;
    		if(tm >= l and tm <= r) {
	    		a[i] = tm;
	    	}
    	}
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
    	if(a[i] != -1) {
    		cnt++;
    	} 
    }

    if(cnt == n) {
    	cout << "YES\n";
    	for(int i = 1; i <= n; i++) {
	    	cout << a[i] << ' '; 
   		}
   		cout << '\n';
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