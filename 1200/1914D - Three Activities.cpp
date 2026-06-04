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

//     vector < vector < pair<int, int> > > v;

//     for(int row = 0; row < 3; row++) {
//     	vector < pair<int, int> > tm;
//     	for(int i = 0; i < n; i++) {
//     		int x; cin >> x;
// 			tm.push_back({x, i + 1});
// 		}
// 		sort(rall(tm));
// 		tm.resize(3);
// 		v.push_back(tm);
//     }

//     // for(int row = 0; row < 3; row++) {
//     // 	for(int i = 0; i < 3; i++) {
//     // 		cout << v[row][i].first << ' ' << v[row][i].second  << "   ";
// 	// 	}
// 	// 	cout << '\n';
		
//     // }

//     // sort(rall(v));

//     // for(int row = 0; row < 3; row++) {
//     // 	for(int i = 0; i < 3; i++) {
//     // 		cout << v[row][i].first << ' ' << v[row][i].second  << "   ";
// 	// 	}
// 	// 	cout << '\n';
		
//     // }
//     int sum = 0;
//     for(int i = 0; i < 3; i++) {
// 		for(int j = 0; j < 3; j++) {
// 			for(int k = 0; k < 3; k++) {
// 				int x = v[0][i].second, y = v[1][j].second, z = v[2][k].second;
// 				if(x == y or x == z or y == z) {
// 					continue;
// 				}
// 				// cout << x << ' ' << y << ' ' << z << '\n';
// 				sum = max(sum, (v[0][i].first + v[1][j].first + v[2][k].first));
// 			}
// 		}
// 	}

//     cout << sum << '\n';




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
    vector < pair <int,int> > a, b, c;

    for(int i = 0; i < n; i++) {
    	int x; cin >> x;
    	a.push_back({x, i + 1});
    }

    for(int i = 0; i < n; i++) {
    	int x; cin >> x;
    	b.push_back({x, i + 1});
    }

    for(int i = 0; i < n; i++) {
    	int x; cin >> x;
    	c.push_back({x, i + 1});
    }

	sort(rall(a));
	a.resize(3);

	sort(rall(b));
	b.resize(3);

	sort(rall(c));
	c.resize(3);

	int ans = 0;
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			for(int k = 0; k < 3; k++) {
				int x = a[i].second, y = b[j].second, z = c[k].second;
				if(x == y or y == z or z == x) {
					continue;
				}
				int sum = a[i].first + b[j].first + c[k].first;
				ans = max(ans, sum);
			}
		}
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