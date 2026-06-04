#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

const int N = 2e5 + 5;
ll DP[N];

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()




void solve() {
    ll n, k, x;
    cin >> n >> k >> x;

    if(DP[k] <= x and x <= (DP[n] - DP[n - k])) {
    	cout << "YES\n";
    }
    else {
    	cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    DP[0] = 0;

    for(int i = 1; i <= N; i++) {
    	DP[i] += DP[i - 1] + i;
    }
    
    int t = 1;
    cin >> t;
    while (t--) {
    
        solve();


    }
    return 0;
}