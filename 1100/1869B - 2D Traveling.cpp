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
    int n, k, a, b;
    cin >> n >> k >> a >> b;
    vector < pair <ll, ll> > vp;

    for(int i = 0; i < n; i++) {
    	ll x, y;
    	cin >> x >> y;
    	vp.push_back({x,y});
    }

    ll a_to_b = abs(vp[a - 1].first - vp[b - 1].first) + abs(vp[a - 1].second - vp[b - 1].second);

    if(k == 0) {
    	cout << a_to_b << '\n';
    	return;
    }

    vector <ll> dis_a_from_all_k, dis_b_from_all_k;

    for(int i = 0; i < k; i++) {
    	ll tm = abs(vp[i].first - vp[a - 1].first) + abs(vp[i].second - vp[a - 1].second);
    	dis_a_from_all_k.push_back(tm);
    	tm = abs(vp[i].first - vp[b - 1].first) + abs(vp[i].second - vp[b - 1].second);
    	dis_b_from_all_k.push_back(tm);
    }

    sort(all(dis_a_from_all_k));
    sort(all(dis_b_from_all_k));

    ll temp_ans = dis_a_from_all_k[0] + dis_b_from_all_k[0];

    ll ans = min(a_to_b, temp_ans);
    cout << ans << '\n';

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