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

    string s;
    cin >> s;
    map < char, int > mp_L, mp_R;

    mp_L[s[0]]++;

    for(int i = 1; i < n; i++) {
    	mp_R[s[i]]++;
    }

	int points = 0;

    int a = mp_L.size();
    int b = mp_R.size();
    points = max(points, (a + b));
    for(int i = 1; i < n - 1; i++) {
    	mp_L[s[i]]++;
    	mp_R[s[i]]--;

    	if(mp_R[s[i]] == 0) {
    		mp_R.erase(s[i]);
    	}

    	a = mp_L.size();
	    b = mp_R.size();
	    points = max(points, (a + b));
	    // cout << a << " " << b << " " << "\n";
    }



    

    

    cout << points << '\n';
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