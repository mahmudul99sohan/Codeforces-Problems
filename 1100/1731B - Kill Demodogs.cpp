// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;
// using pii = pair<int,int>;
// using pll = pair<ll,ll>;
// using vi = vector <int>;
// using vl = vector <ll>;
// const ll mod = 1e9 + 7;

// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()

// void solve() {
//     ll n;
//     cin >> n;
//     ll tm = (2022 * ((((n * (n + 1)) % mod) * (4 * n - 1)) % mod) / 6) % mod;
//     cout << tm << '\n';
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t = 1;
//     cin >> t;
//     while (t--) {
    
//         solve();


//     }
//     return 0;
// }



















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

    for(int i = n; i > 0; i--) {
    	cout << i << ' ';
    }
    cout << '\n';
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