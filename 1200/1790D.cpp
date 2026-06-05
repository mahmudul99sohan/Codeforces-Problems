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

    // vector <int> v(n);
    map <int,int> mp;
    int x;
    for(int i = 0; i < n; i++) {
    	cin >> x;
        mp[x]++;
    }

    int cnt = 0;

	for(auto [key, fr] : mp) {
		cnt += max(0, fr - mp[key - 1]);
	}

    

    cout << cnt << '\n';
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