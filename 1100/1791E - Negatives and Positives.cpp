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
    vector <ll> v(n);
    ll cnt_neg = 0, sum = 0, min_ele = ll(1e9 + 9);
    for(int i = 0; i < n; i++) {
    	cin >> v[i];
        if(v[i] < 0) {
            cnt_neg++;
        }
        sum += abs(v[i]);
        min_ele = min(min_ele, abs(v[i]));
    }



    if(cnt_neg % 2 == 0) {
        cout << sum << '\n';
    }
    else {
        cout << sum - 2 * min_ele << '\n';
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