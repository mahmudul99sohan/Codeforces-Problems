#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
     int n;
     cin >> n;
     string s; cin >> s;
     map <char,int> mp;
     int ans = 0, sizee = 0;
     for(int i = 0; i < n; i++) {
     	mp[s[i]]++;
     	sizee = mp.size();
     	ans += sizee;
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