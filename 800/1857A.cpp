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

    vector <int> a(n);
    int ev_cnt = 0, odd_cnt = 0;
    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    	if(a[i] & 1) {
    		odd_cnt++;
    	}
    	else {
    		ev_cnt++;
    	}
    }

    if(odd_cnt & 1) {
    	cout << "NO\n";
    }
    else {
    	cout << "YES\n";
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