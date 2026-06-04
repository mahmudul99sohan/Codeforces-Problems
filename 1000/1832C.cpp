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

    vector <int> a(n), b;
    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    }
	b.push_back(a[0]);

    for(int i = 1; i < n; i++) {
    	if(a[i] == a[i - 1]) {
    		continue;
    	}
    	b.push_back(a[i]);
    }


    if(b.size() == 1) {
    	cout << "1\n";
    	return;
    }

    int cnt = 1, flow = 0;
    if(b[1] > b[0]) {
    	flow = 1;
    }
    else {
    	flow = -1;
    }
    for(int i = 2; i < b.size(); i++) {

    	if((b[i] > b[i - 1]) and flow < 0) {
    		flow = 1;
    		cnt++;
    	}
    	if((b[i] < b[i - 1]) and flow > 0) {
    		flow = -1;
    		cnt++;
    	}
    }


    cout << cnt + 1 << '\n';

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