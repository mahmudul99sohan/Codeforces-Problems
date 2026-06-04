#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map <char, int > mp;
    for(auto c : s) {
    	mp[c]++;
    }
    map <char, int> even,odd;
    int odd_char = 0, even_char = 0;
    for(auto[x, y] : mp) {
    	if(y % 2) {
    		odd[x] = y;
    		odd_char += y;
    	}
    	else {
    		even[x] = y;
    		even_char += y;
    	}
    }
    if(k + 1 < odd.size()) {
    	cout << "NO\n";
    }
    else {
    	cout << "YES\n";
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