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
    cin >>  n;
    vector <int> v;

    for(int i = 0; i < n; i++) {
    	int x;
    	cin >> x;
    	v.push_back(abs(x));
    }
    sort(all(v));

    cout << v[0] << '\n';


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
    
        solve();


    }
    return 0;
}