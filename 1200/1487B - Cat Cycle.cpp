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
    ll n, k;
    cin >> n >> k;

    if(n & 1) {
    	ll collisions = (k - 1) / (n / 2);
    	ll pos = ((k - 1 + collisions) % n) + 1;
    	cout << pos << '\n';
    }
    else {
    	ll pos = ((k - 1) % n) + 1;
    	cout << pos << '\n';
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