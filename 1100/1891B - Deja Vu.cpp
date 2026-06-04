#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()																				

void solve() {
    int n, q;
    cin >> n >> q;
    vector <int> a(n);

    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    }
    vector <int > vec_x;
    map <int,int> mp;
    for(int i = 0; i < q; i++) {
    	int x; cin >> x;
    	mp[x]++;
    	if(mp[x] == 1) {
    		vec_x.push_back(x);
    	}
    }
    

    for(auto x : vec_x) {
    	int val = (1 << x);
    	for(int i = 0; i < n; i++) {
    		if(a[i] % val == 0) {
    			a[i] += (1 << (x - 1));
    		}
    	}
    }

    for(int i = 0; i < n; i++) {
    	cout << a[i] << ' ';
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