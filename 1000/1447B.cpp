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
    int n, m;
    cin >> n >> m;

    int a[10][10];
    int non_positive = 0;
    int mn = 150, sum = 0;
    for(int i = 0; i < n; i++) {
    	for(int j = 0; j < m; j++) {
    		cin >> a[i][j];
    		if(a[i][j] <= 0) {
    			non_positive++;
    		}

    		mn = min(mn, abs(a[i][j]));
    		sum += abs(a[i][j]);
    	}
    }

    if(non_positive & 1) {
    	sum -= (mn * 2);
    }

    cout << sum << '\n';


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