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
    int len_b = n * (n - 1) / 2;
    vector <int> b(len_b);
    map <int,int> mp;
    for(int i = 0; i < len_b; i++) {
    	cin >> b[i];
    	mp[b[i]]++;
    }
    int max_ele = *max_element(all(b));
    
	vector <int> a(n + 1);
	int indx = 1;
	for(auto [x, y] : mp) {
		int req = n - indx;
		// if(y == req) {
		// 	a[indx] = x;
		// 	indx++;
		// }
		while(indx <= n and y >= req) {
			a[indx] = x;
			y -= req;
			indx++;
			req = n - indx;
		}
    }
    for(indx; indx <= n; indx++) {
    	a[indx] = (max_ele + 1);
    }

    for(int i = 1; i <= n; i++) {
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