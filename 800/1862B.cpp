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

    vector <int> b(n);

    for(int i = 0; i < n; i++) {
    	cin >> b[i];
    }

    vector <int> a;
    a.push_back(b[0]);

    for(int i = 1; i < n; i++) {
    	if(b[i] >= b[i - 1]) {
    		a.push_back(b[i]);
    	}
    	else {
    		a.push_back(b[i]);
    		a.push_back(b[i]);

    	}
    }
    cout << a.size() << '\n';
    for(auto x : a) {
    	cout << x << ' ';
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