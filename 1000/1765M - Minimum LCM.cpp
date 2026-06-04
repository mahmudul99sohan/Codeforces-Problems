#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

bool is_prime(int n) {
	for(int i = 2; i * i <= n; i++) {	
		if(n % i == 0) {
			return false;
		}
	}
	return true;
}

int get_big_divisor_not_n(int n) {
	vector <int> v;
	for(int i = 1; i * i <= n; i++) {
		if(n % i == 0) {
			v.push_back(i);
			v.push_back(n / i);
		}
	}
	sort(all(v));
	auto it = *(++v.rbegin());
	return it;
}

void solve() {
    int n;
    cin >> n;

    if(n % 2 == 0) {
    	cout << n / 2 << ' ' << n / 2 << '\n';
    }
    else {
    	if(is_prime(n)) {
	    	cout << 1 << ' ' << n - 1 << '\n';
    	}
    	else {
    		int a = get_big_divisor_not_n(n);
    		int b = n - a;
    		cout << a << ' ' << b << '\n';
    	}
    }
    // for(int i = 1; i <= n / 2; i++) {
    // 	cout << i << " " << n - i << ' ' << lcm(i,n - i) << '\n';
    // }
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