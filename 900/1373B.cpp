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
    string s;
    cin >> s;
    int cnt_0 = 0, cnt_1 = 0;
    for(int i = 0; i < s.size(); i++) {
    	if(s[i] == '0') {
    		cnt_0++;
    	}
    	else {
    		cnt_1++;
    	}
    }

    int mn = min(cnt_0, cnt_1);
    // cout << mn << '\n';
    if(mn & 1) {
    	cout << "DA\n";
    }
    else {
    	cout << "NET\n";
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