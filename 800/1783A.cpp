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

    vector <int> v(n);
    map <int,int> mp;
    for(int i = 0; i < n; i++) {
    	cin >> v[i];
    	mp[v[i]]++;
    }

    sort(rall(v));

    if(st.size() == 1) {
    	cout << "NO\n";
    }
    else {
    	cout << "YES\n";

    	if(mp[v[0]] > 1) {
    		int a = v[0];
    		int b = v[mp[a]];

    		for()
    	}
    	else {
    		for(auto x : v) {
    			cout << x << ' ';
    		}
    	}
    	cout << '\n';


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