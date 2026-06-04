#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector <int>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

bool is_ok(vi &v) {
	int n = v.size();
	 for(int i = 1; i < n; i++) {
	 	if(v[i] < v[i - 1]) {
	 		return false;
	 	}
	 }
	 return true;
}

void solve() {
    int n, k;
    cin >> n >> k;

    vector <int> v(n);
    for(int i = 0; i < n; i++) {
    	cin >> v[i];
    }

    if(is_ok(v)) {
    	cout << "YES\n";
    	return;
    }
    

   	// for(int i = 0; i < n - k; i++) {
    // 	reverse(v.begin() + i, v.begin() + i + k);
    // }

    if(k >= 2) {
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