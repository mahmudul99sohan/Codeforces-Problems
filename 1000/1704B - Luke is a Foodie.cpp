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
    int n, x;
    cin >> n >> x;

    vector <int> a(n);

    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    }

    int changed = 0;


    int Low = a[0] - x;
    int High = a[0] + x;

    for(int i = 1; i < n; i++) {
    	int New_Low = a[i] - x;
    	int New_High = a[i] + x;

    	if(High < New_Low or Low > New_High) {
    		changed++;
    		Low = New_Low;
    		High = New_High;
    	}
    	else {
    		Low = max(Low, New_Low);
    		High = min(High, New_High);
    	}
    }

    cout << changed << '\n';

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