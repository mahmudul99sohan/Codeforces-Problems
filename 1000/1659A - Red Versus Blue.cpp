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
    int n, r, b;
    cin >> n >> r >> b;

    if(b == 1) {
    	int temp = r / 2;
    	for(int i = 0; i < temp; i++) {
    		cout << 'R';
    	}
    	cout << "B";
    	r -= temp;
    	for(int i = 0; i < r; i++) {
    		cout << 'R';
    	}
    	cout << '\n';
    	return;
    }

    // int rem_b = r % b;
    // int req_r = r / b;
    // if(rem_b == 0) {
    // 	rem_b = r % (b + 1);
    // 	req_r = r  / ( b + 1);
    // }

    int rem_b = r % (b + 1);
	int req_r = r  / ( b + 1);
    // int rem_b_plus_1 = r % (b + 1);
    // if(rem_b < rem_b_plus_1) {
    // 	req_r = r / b;
    // }
    // else {
    // 	req_r = r / ( b + 1);
    // }

    string s = "";

    for(int i = 0; i < req_r; i++) {
    	s += 'R';
    }
    // s += 'B';
    int temp = rem_b; 
    for(int i = 0; i < b; i++) {
    	cout << s;
        if(temp) {
            cout << 'R';
            temp--;
        }
        cout << 'B';
    }
    
    for(int i = 0; i < temp + req_r; i++) {
		cout << 'R';
	}
	cout << '\n';
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