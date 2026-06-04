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
    vector <int> v(n);
    int zero = 0;
    for(int i = 0; i < n; i++) {
    	cin >> v[i];
    	if(!v[i]) {
    		zero++;
    	}
    }
    if(zero == 0) {
    	cout << "1\n";
    	return;
    }
    if(zero == n) {
    	cout << "0\n";
    	return;
    }
    // cout << "2\n";

    int  cnt = 0;
    for(int i = 0; i < n; i++) {
    	bool flag = false;
    	while(v[i] != 0 and  i < n) {
    		i++;
    		flag = true;
    	}

    	if(flag) {
    		i--;
    		cnt++;
    	}

    }

    if(cnt <= 1) {
    	cout << cnt << '\n';
    }
    else {
    	cout << "2\n";
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