#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

bool cmp(pii a, pii b) {
	if(a.first != b.first) {
		return (a.first > b.first);
	}
	return (a.second < b.second);
}

void solve() {
    int n, p;
    cin >> n >> p;

    vector <int> a(n), b(n);

    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
    	cin >> b[i];
    }

    deque < pii > dp;

    for(int i = 0; i < n; i++) {
    	dp.push_back({b[i], a[i]});
    }

    sort(all(dp),cmp);

    int cnt = 0, left = 0, ans = 0;

    for(int i = n - 1; i >= left; i--) {
    	ans += p;
    	int rem = i - left;
    	ans += (dp[i].first * min(dp[i].second, rem));

    	left += min(dp[i].second, rem);

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