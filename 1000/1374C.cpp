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
    string s;
    cin >> s;
    stack <char> stk;
    int cnt_cls = 0;
    for(int i = 0; i < n; i++) {
    	if(!stk.empty()) {
    		if(s[i] == '(') {
    			stk.push(s[i]);
    		}
    		else {
    			stk.pop();
    		}
    	}
    	else {
    		if(s[i] == '(') {
    			stk.push(s[i]);
    		}
    		else {
    			cnt_cls++;
    		}
    	}
    }


    cout << min(cnt_cls, (int)stk.size()) << '\n';


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