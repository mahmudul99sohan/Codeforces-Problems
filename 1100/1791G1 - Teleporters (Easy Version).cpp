
// G1 Easy Version 

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
//     int n, c;
//     cin >> n >> c;
//     vector <int> a(n + 1), sum(n + 1);

//     for(int i = 1; i <= n; i++) {
//     	cin >> a[i];
//     	sum[i] = a[i] + i;
//     }
//     int cnt = 0;
//     sort(all(sum));
//     for(int i = 1; i <= n; i++) {
//     	if(c >= sum[i]) {
//     		cnt++;
//     		c -= sum[i];
//     	}
//     }

//     cout << cnt << '\n';


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










// G2 Hard Version


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
    int n, c;
    cin >> n >> c;
    vector <int> a(n + 1), sum(n + 1), sum_n(n + 1);

    for(int i = 1; i <= n; i++) {
    	cin >> a[i];
    }
    for(int i = 1; i <= n ; i++) {
    	sum[i] = a[i] + i;
    }

    int indx = min_element(sum.begin() + 1, sum.end()) - sum.begin();

    for(int i = n; i >= 1; i--) {
    	sum_n[i] = a[i] + (n + 1 - i);
    }
    // cout << indx << '\n';
    // return;
    // sort(all(sum));
    // sort(all(sum_n));
    vector <int> last_sum;
    for(int i = 1; i <= n; i++) {
    	if(i != indx) {
    		int temp = min(sum[i], sum_n[i]);
    		last_sum.push_back(temp);
    	}
    }
    sort(all(last_sum));

    // for(auto x : last_sum) {
    // 	cout << x << ' ';
    // }
    // cout << '\n';
    
    // return;
    int cnt = 0;

    if(sum[indx] <= c) {
    	c -= sum[indx];
    	cnt++;
    	// n--;
    }


    for(int i = 0; i < last_sum.size(); i++) {
    	if(c >= last_sum[i]) {
    		cnt++;
    		c -= last_sum[i];
    	}
    }

    cout << cnt << '\n';


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