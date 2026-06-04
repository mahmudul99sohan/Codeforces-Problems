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

    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    }
    int cnt = 0, ans = 0;
    for(int i = 0; i < n; i++) {
    	cnt = 0;
    	while(i < n and a[i] == 0) {
    		cnt++;
    		i++;
    	}

    	ans = max(ans, cnt);

    }

    ans = max(ans, cnt);

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