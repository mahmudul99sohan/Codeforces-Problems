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
    vector <int> v(n + 1);

    for(int i = 1; i <= n; i++){
    	cin >> v[i];
    }
    
    int g = abs(v[1] - 1);
    
    for(int i = 2; i <= n; i++){
    	g = __gcd(g, abs(v[i] - i));
    }
   


    
    cout << g << '\n';
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