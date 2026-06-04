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
    long long a, b;
    cin >> a >> b;

    long long minimumOperations = LLONG_MAX;

    for (int add = 0; add < 32; add++)
    {
        long long newBase = b + add;

        if (newBase == 1)
            continue;

        long long currentValue = a;
        long long operations = add;

        while (currentValue > 0)
        {
            currentValue /= newBase;
            operations++;
        }

        minimumOperations = min(minimumOperations, operations);
    }

    cout << minimumOperations << "\n";
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