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
    int n;
    cin >> n;

    vector <int> v(n);

    for(int i = 0; i < n; i++) {
    	cin >> v[i];
    }

    int loc_a = -1, loc_b = -1;
    bool found = false;
    for(int i = 0; i < n; i++) {
    	for(int j = i + 1; j < n; j++) {
    		if(__gcd(v[i], v[j]) <= 2) {
    			found = true;
    			loc_a = i;
    			loc_b = j;
    			break;
    		}
    	}
    	if(found) {
    		break;
    	}
    }

    if(loc_a != -1 and loc_b != -1) {
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