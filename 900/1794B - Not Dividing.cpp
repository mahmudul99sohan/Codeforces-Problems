#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n;
    cin  >> n;
    vector <int> v(n);

    for(int i = 0; i < n; i++) {
    	cin >> v[i];
    }

    for(int i = 0; i < n; i++) {
    	if(v[i] == 1) {
	    	v[i]++;
	    }
    }


    for(int i = 1; i < n; i++) {
    	
    	if(v[i] % v[i - 1] == 0 and v[i - 1] != 1) {
    		v[i]++;
    	}
    	

    }

    for(int i = 0; i < n; i++) {
    	cout << v[i] << ' ';
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