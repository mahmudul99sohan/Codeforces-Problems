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

    vector <int> v(n);

    for(int i = 0; i < n; i++) {
    	cin >> v[i];
    }

    vector <int> st;

    for(int i = 0; i < n - 1; i++) {
    	if(v[i] > v[i + 1]) {
    		cout << "0\n";
    		return;
    	}
    	else {
    		st.push_back(abs(v[i + 1] - v[i]));
    	}
    }

    
    sort(all(st));

    cout << (st[0] / 2) + 1 << '\n';
    return;
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