#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector <int>;
using vl = vector <ll>;
const int N = 1e6 + 9;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()


int pre_xor[N];

void solve() {
    int M, X;
    cin >> M >> X;

    int ans = pre_xor[M - 1];

    

    // if(ans == X) {
    // 	cout << M + 2 <<"\n";
    // 	return;
    // }

    if(ans == X) {
    	cout << M << '\n';
    }
    else if(((ans ^ X)) == M) {
    	// cout << ((ans ^ X)) << ' ' << X << '\n';
    	cout << M + 2 << '\n';
    }
    else {
    	cout << M + 1 << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    pre_xor[0] = 0;
    for(int i = 1; i < N; i++) {
    	pre_xor[i] = (i ^ pre_xor[i - 1]);
    }
    int t = 1;
    cin >> t;
    while (t--) {
    
        solve();


    }
    return 0;
}