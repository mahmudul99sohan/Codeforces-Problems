#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector <int>;
using vl = vector <ll>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

ll area(ll n, ll c, vector <ll> &v, ll w) {
    ll sum = 0;
    for(int i = 0; i < n; i++) {
        sum += (v[i] + (2 * w)) * (v[i] + (2 * w));
        if(sum > c) {
            // cout << sum << ' ';
            return sum;
        }
    }
    return sum;
}

void solve() {
    ll n, c;
    cin >> n >> c;
    vector <ll> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    ll Low = 1, High = ll(1e9), ans = -1;

    while(Low <= High) {
        ll mid = Low + (High - Low) / 2;
        ll ar = area(n, c, v, mid);
        // cout << ar << ' ';
        if(ar == c) {
            // Low = High + 1;
            ans = mid;
            break;
        }
        else if(ar > c) {
            High = mid - 1;
        }
        else {
            Low = mid + 1;
        }
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