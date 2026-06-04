#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    string s;
    cin >> s;
    int cnt_0 = 0, cnt_1 = 0; 
    for(auto c : s) {
    	if(c == '0') {
    		cnt_0++;
    	}
    	else {
    		cnt_1++;
    	}
    }
    if(s.size() == 1) {
    	cout << "1\n";
    	return;
    }

    string t = s;

    for(int i = 0; i < s.size(); i++) {
    	
    	if(s[i] == '0') {
    		if(cnt_1 > 0) {
    			t[i] = '1';
    			cnt_1--;
	    	}
	    	else {
    			cnt_0--;
	    	}
    		
    	}
    	else {
    		if(cnt_0 > 0) {
    			t[i] = '0';
    			cnt_0--;
	    	}
	    	else {
    			cnt_1--;
	    	}

    	}
    }

    for(int i = 0; i < s.size(); i++) {
    	if(s[i] == t[i]) {
    		cout << s.size() - i << '\n';
    		return;
    	}
    }

    cout << "0\n";
    return;


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