#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n, k;
    cin >> n >> k;
    vector <int> a(n), b(n);

    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
    	cin >> b[i];
    }
    int sum = 0;
    int mx_b = 0;
    int ans = 0;
    for(int i = 0; i < min(n,k); i++) {
    	sum += a[i];
    	mx_b = max(mx_b, b[i]);

    	ans = max(ans, sum + ((k - i - 1) * mx_b));

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