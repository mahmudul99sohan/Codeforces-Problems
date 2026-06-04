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

    if(n == 2) {
    	cout << 1 << ' ' << 0 << '\n';
    }
    else if(n == 3) {
    	cout << 1 << ' ' << 0 << ' ' << 2 << '\n';

    }
    else {
    	int max_bit_on = 0;
    	
    	for(int i = 0; i <= 20; i++) {
    		if((n >> i)) {
    			max_bit_on = i;
    		}
    	}
    	// cout << max_bit_on << '\n';

    	int val = (1 <<  max_bit_on);
    	if(n == val) {
    		max_bit_on--;
    		val = (1 <<  max_bit_on);
    	}
    	// cout << val << '\n';

    	for(int i = 1; i < val; i++) {
    		cout << i << ' ';
    	}

    	cout << "0 ";

    	for(int i = val; i < n; i++) {
    		cout << i << ' ';
    	}
    	cout << '\n';

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