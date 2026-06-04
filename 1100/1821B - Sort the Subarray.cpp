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
    vector <int> a(n), ap(n);

    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
    	cin >> ap[i];
    }
    int L = -1, R = -1; 
    for(int i = 0; i < n; i++) {
    	if(ap[i] != a[i]) {
            L = i;
            break;
        }
    	
    }

    for(int i = n - 1; i >= 0; i--) {
        if(ap[i] != a[i]) {
            R = i;
            break;
        }
    }

    while(L > 0 and ap[L] >= ap[L - 1]) {
        L--;
    }

    while(R < n - 1 and ap[R] <= ap[R + 1]) {
        R++;
    }




    cout << L + 1 << ' ' << R + 1 << '\n';
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


