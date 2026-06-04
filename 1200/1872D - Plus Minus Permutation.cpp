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
    ll n, x, y;
    cin >> n >> x >> y;

    ll lcm_x_y = lcm(x,y);

    ll tm_x = n / x;
    ll tm_y = n / y;
    ll tm_lcm_x_y = n / lcm_x_y;

    tm_x -= tm_lcm_x_y;
    tm_y -= tm_lcm_x_y;

    ll sum_n = (n * ( n + 1)) / 2;
    ll tmp = n - tm_x;
    ll sum_x = (tmp * ( tmp + 1)) / 2;

    sum_x = sum_n - sum_x;


    ll sum_y = (tm_y * ( tm_y + 1)) / 2;;


    // for(int i = 0; i < tm_x; i++) {
    // 	sum_x += max_n;
    // 	max_n--;
    // }

    // for(int i = 1; i <= tm_y; i++) {
    // 	sum_y += i;
    // }

    cout << sum_x - sum_y << '\n';




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