#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
	int n;
	cin >> n;
	vector <int> v(n);
	for(auto &x : v) {
		cin >> x;
	}
	if(n % 2 == 0) {
		cout << "2\n";
		// cout << 1 << ' ' << n - 1 << '\n';
		cout << 1 << ' ' << n << '\n';
		cout << 1 << ' ' << n << '\n';
	}
	else {
		cout << "4\n";
		cout << 1 << ' ' << n  << '\n';
		cout << 1 << ' ' << n - 1 << '\n';
		cout << n - 1 << ' ' << n << '\n';
		cout << n - 1 << ' ' << n << '\n';
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