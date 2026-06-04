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
    ll sum = 0;
    for(int i = 0; i < n; i++) {
    	cin >> v[i];
    	sum += v[i];
    }

    vector <ll> pre_sum(n);

    pre_sum[0] = v[0];

    for(int i = 1; i < n; i++) {
    	pre_sum[i] = pre_sum[i - 1] + v[i];
    }

    ll ans = 0;
    for(int i = 0; i < n - 1; i++) {
    	ll tmp = gcd(pre_sum[i], (sum - pre_sum[i]));
    	ans = max(ans, tmp);
    }

    cout << ans << '\n';


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