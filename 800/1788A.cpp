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

    vector <int> v(n), pref_2s(n), suf_2s(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    if(v[0] == 2) {
        pref_2s[0] = 1;
    }
    else {
        pref_2s[0] = 0;

    }
    for(int i = 1; i < n; i++) {
        if(v[i] == 2) {
            pref_2s[i] = pref_2s[i - 1] + 1;
        }
        else {
            pref_2s[i] = pref_2s[i - 1];

        }
    }

    if(v[n - 1] == 2) {
        suf_2s[n - 1] = 1;
    }
    else {
        suf_2s[n - 1] = 0;

    }

    for(int i = n - 2; i >= 0; i--) {
        if(v[i] == 2) {
            suf_2s[i] = suf_2s[i + 1] + 1;
        }
        else {
            suf_2s[i] = suf_2s[i + 1];

        }
    }

    

    for(int i = 0; i < n - 1; i++) {
        if(pref_2s[i] == suf_2s[i + 1]) {
            cout << i + 1 << '\n';
            return;
        }
    }


    cout << "-1\n";
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