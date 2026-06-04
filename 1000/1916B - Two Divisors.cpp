#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int a, b;
    cin >> a >> b;
    // cout << a << ' ' << b << ' ';
    if(a == 1) {
    	cout << b * b << '\n';
    	return;
    }
    for(int i = 2; i <= a; i++) {
    	if((i * b) % a == 0) {
    		if((i * b) / a <= a or (i * b) / a == b) {
	    		cout << i * b ;
	    		break;
	    	}
    	}
    }
    cout << '\n';
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