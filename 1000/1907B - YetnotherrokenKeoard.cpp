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
    vector <int> cap,small;
    for(int i = 0; i < s.size(); i++) {
    	if(s[i] == 'b') {
    		if(small.size() > 0) {
    			small.pop_back();
    		}
    	}
    	else if(s[i] == 'B') {
    		if(cap.size() > 0) {
    			cap.pop_back();
    		}
    	}
    	else if(s[i] >= 'A' and s[i] <= 'Z' and s[i] != 'B') {
    		cap.push_back(i);
    	}
    	else if(s[i] >= 'a' and s[i] <= 'z' and s[i] != 'b') {
    		small.push_back(i);
    	}
    }
    vector <int> rem;
    for(auto x : small) {
    	rem.push_back(x);
    }
    for(auto x : cap) {
    	rem.push_back(x);
    }

    sort(all(rem));

    for(auto x : rem) {
    	cout << s[x];
    }

    cout << "\n";


    
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