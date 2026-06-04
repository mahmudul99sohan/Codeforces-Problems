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
    int n, k;
    cin >> n >> k;

    vector <int> a(n);

    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    }

    sort(all(a));

    if(n == 2) {
    	if(a[1] - a[0] == k) {
    		cout << "YES\n";
    	}
    	else {
    		cout << "NO\n";
    	}
    }
    else {
    	if(a[n - 1] - a[n - 2] == k or a[n - 1] - a[0] == k) {
    		cout << "YES\n";
    	}
    	else {
    		cout << "NO\n";
    	}
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