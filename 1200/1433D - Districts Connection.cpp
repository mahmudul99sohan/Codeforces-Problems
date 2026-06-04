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
    set <int> st;
    int mark[n];
    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    	st.insert(a[i]);
    	mark[i] = 0;
    }
    if(st.size() == 1) {
    	cout << "NO\n";
    }
    else {
    	mark[0] = 1;
    	int tm = a[0];
    	cout << "YES\n";
    	int tm2 = -1, tm2_indx = -1;
    	for(int i = 1; i < n; i++) {
			if(tm != a[i]) {
				tm2 = a[i];
				tm2_indx = i;
				cout << 1 << ' ' << i + 1 << '\n';
				mark[i] = 1;
			}
		}

		for(int i = 1; i < n; i++) {
			if(mark[i] == 0 and tm2 != a[i]) {
				cout << tm2_indx + 1 << ' ' << i + 1 << '\n';
			}
		}

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