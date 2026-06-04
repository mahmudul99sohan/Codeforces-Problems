
// /// This is the Greedy way. This code is big.

// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;
// using pii = pair<int,int>;
// using pll = pair<ll,ll>;
// using vi = vector <int>;
// using vl = vector <ll>;
// const int N = 1e6 + 5;

// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()

// int mark[N];
// vector <int> pref_sum(N);

// void solve() {
//     int n;
//     cin >> n;

//     for(int i = 1; i < 50; i++) {
//     	cout << i << ' ' << pref_sum[i] << '\n';
//     }

//     cout << pref_sum[n] << '\n';
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     for(int i = 1; i < N; i++) {
//     	int tm = i;
//     	int c = 0;
//     	while(tm) {
//     		if(tm % 10 != 0) {
//     			c++;
//     		}
//     		tm /= 10;
//     	}
//     	if(c == 1) {
//     		mark[i] = 1;
//     	}
//     }

//     for(int i = 1; i < N; i++) {
//     	pref_sum[i] = pref_sum[i - 1] + mark[i];
//     }

//     int t = 1;
//     cin >> t;
//     while (t--) {
    
//         solve();


//     }
//     return 0;
// }














///  This is the short way to code



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
    ll n;
    cin >> n;

    int ans = 0;

    while(n) {
    	ans += min(9ll, n);
    	n /= 10;
    }
    cout << ans << '\n';
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