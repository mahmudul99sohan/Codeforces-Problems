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
    vector <int> v(n);

    for(auto &x : v) {
    	cin >> x;
    }

    if(n == 1) {
    	cout << "0\n";
    	return;
    }

    sort(v.begin(), v.end());
    int Left = 0, Right = 0;
    for(int i = 1; i < n; i++) {
    	int L = 1;
    	bool flag = false;
    	while((k >= abs(v[i] - v[i - 1])) and i < n) {
    		L++;
    		i++;
    		flag = true;
    	}
    	Left = max(Left, L);
    	if(flag) i--;
    	

    	// if(k >= abs(v[i] - v[i - 1])) {
    	// 	Left++;
    	// }
    	// else {
    	// 	break;
    	// }
    }

    for(int i = n - 2; i >= 0; i--) {
    	int R = 1;
    	bool flag = false;
    	while((k >= abs(v[i] - v[i + 1])) and i >= 0) {
    		R++;
    		i--;
    		flag = true;

    	}
    	Right = max(Right, R);
    	
    	if(flag) i++;


    	// if(k >= abs(v[i] - v[i + 1])) {
    	// 	Right++;
    	// }
    	// else {
    	// 	break;
    	// }
    }

    cout << n - max(Left, Right) << '\n';


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