
// /// This is my first way

// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;
// using pii = pair<int,int>;
// using pll = pair<ll,ll>;
// using vi = vector <int>;
// using vl = vector <ll>;

// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()

// void solve() {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;

//     int mx = 0, mx_indx = 0, mn = 0, mn_indx = 0;

//     for(int i = 0; i < n; i++) {
//     	int tm = int(s[i] - 'a');
//     	if(mx <= tm) {
//     		mx = tm;
//     		mx_indx = i;
//     	}
//     	else {
//     		mn = tm;
//     		mn_indx = i;
//     		cout << "YES\n";
//     		cout << mx_indx + 1 << ' ' << mn_indx + 1 << '\n';
//     		return;
//     	}

//     }

//     cout << "NO\n";
//     return;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t = 1;
//     // cin >> t;
//     while (t--) {
    
//         solve();


//     }
//     return 0;
// }

















/// This is Another way



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
    string s;
    cin >>  n >> s;

    for(int i = 0; i < n - 1; i++) {
    	if(s[i] > s[i + 1]) {
    		cout << "YES\n";
    		cout << i + 1 << " " << i + 2 << '\n';
    		return;
    	}
    }
    cout << "NO\n";
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
    
        solve();


    }
    return 0;
}