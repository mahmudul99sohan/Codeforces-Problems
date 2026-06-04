#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n, x;
    cin >> n >> x;
    vector <int> v(n);

    for(int i = 0; i < n; i++) {
    	cin >> v[i];
    }

    int max_dis = 0, initial = 0;

    for(int i = 0; i < n; i++) {
    	max_dis = max(max_dis, abs(v[i] - initial));
    	initial = v[i];
    }

    max_dis = max(max_dis, (2 * abs(v[n - 1] - x)));

    cout << max_dis << '\n';



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