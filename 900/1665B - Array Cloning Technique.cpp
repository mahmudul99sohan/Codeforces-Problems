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
    map <int,int> frq;
    for(int i = 0; i < n; i++) {
    	cin >> v[i];
    	frq[v[i]]++;
    }


    int mx = 0;

    for(auto [x,y] : frq) {
    	mx = max(mx, y);
    }

    int ans = 0;

    int remain = n - mx;

    while(remain > 0) {
        int take = min(mx, remain);
        ans += (take + 1);
        remain -= take;
        mx += take;
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