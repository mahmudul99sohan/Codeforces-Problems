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
    int n, k;
    cin >> n >> k;
    string ss;
    cin >> ss;
	string s = " ";
	s += ss;
    vector <int> prefix_sum_B(n + 1);
	prefix_sum_B[0] = 0;
	// prefix_sum_W[0] = 0;


    for(int i = 1; i <= n; i++) {
    	if(s[i] == 'B') {
    		// prefix_sum_W[i] = prefix_sum_W[i - 1];
    		prefix_sum_B[i] = prefix_sum_B[i - 1] + 1;
    	}
    	else {
    		// prefix_sum_W[i] = prefix_sum_W[i - 1] + 1;
			prefix_sum_B[i] = prefix_sum_B[i - 1];
    	}
    }

    // for(auto it : prefix_sum_B) {
    // 	cout << it << ' ';
    // }

    int max_consicutive_B = 0;
    for(int i = 1; i <= n - k + 1; i++) {
    	int temp = prefix_sum_B[i + k - 1] - prefix_sum_B[i - 1]; 
    	max_consicutive_B = max(max_consicutive_B, temp);
    }
    // cout << max_consicutive_B << ' ';
    cout << k - max_consicutive_B << '\n';

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