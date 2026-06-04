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
	ll x, y, k;
	cin >> x >> y >> k;

	ll total_stick = (y * k) + k;
	ll trade = 1;
	total_stick -= x;

	trade += ((total_stick + (x - 1) - 1) / (x - 1));

	trade += k;

	cout << trade << '\n';
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