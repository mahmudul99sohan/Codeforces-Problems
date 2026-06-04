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

    if(n == 1) {
    	cout << "0\n";
    	return;
    }
    
    
    map <int,int> mp;

    // bool flag = 0;

    for(int i = 2; i <= 3; i++) {
    	int c = 0;
    	while(n > 0 and n % i == 0) {
    		n /= i;
    		c++;
    		// if(i != 2 and i != 3) {
    		// 	flag = 1;
    		// }
    	}
    	mp[i] = c;

    }

    // if(n == 2) {
    // 	mp[2] = 1;
    // }
    // if(n == 3) {
    // 	mp[3] = 1;
    // }



    if(n > 1) {
    	cout << "-1\n";
    }
    else {
    	int cnt_2 = mp[2];
    	int cnt_3 = mp[3];
    	if(cnt_2 > cnt_3) {
	    	cout << "-1\n";

    	}
    	else {
    		cout << cnt_3 + (cnt_3 - cnt_2) << '\n';
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