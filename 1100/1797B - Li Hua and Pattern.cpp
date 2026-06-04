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
    int n, k;
    cin >> n >> k;

    vector < vector < int > > v;

    for(int i = 0; i < n; i++) {
    	vector <int> tm(n);
    	for(int j = 0; j < n; j++) {
    		cin >> tm[j];
    	}
    	v.push_back(tm);
    }
    


    int dif_cnt = 0;

    for (int i = 0; i < n; i++) { // Loop over rows
		for (int j = 0; j < n; j++) { // Loop over columns
			// Compare the cell with its 180-degree rotated counterpart
			if (v[i][j] != v[n - i - 1][n - j - 1]) {
				dif_cnt++; // Increment the counter if they are different
			}
		}
	}

    

    if(dif_cnt > k) {
    	cout << "NO\n";
    }
    else if(dif_cnt == k) {

    	cout << "YES\n";
    }
    else {
    	k -= dif_cnt;
    	if((k & 1) == 0) {
    		cout << "YES\n";
    	}
    	else {
    		if(n & 1 == 1) {
    			cout << "YES\n";
    		}
    		else {
    			cout << "No\n";
    		}
    	}
    }


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












// #include <bits/stdc++.h>

// using namespace std;
// #define ll long long

// int main() {
// 	ll t;
// 	cin >> t; // Read the number of test cases
// 	while (t--) {
// 		ll n, k;
// 		cin >> n >> k; // Read the size of the pattern (n) and the number of operations (k)
// 		ll arr[n][n];

// 		// Read the n x n pattern matrix
// 		for (int i = 0; i < n; i++) { // Loop over rows
// 			for (int j = 0; j < n; j++) { // Loop over columns
// 				cin >> arr[i][j]; // Read each cell's color
// 			}
// 		}

// 		ll cnt = 0; // Initialize a counter for mismatched cells

// 		// Count the number of mismatched cells compared to the 180-degree rotated pattern
// 		for (int i = 0; i < n; i++) { // Loop over rows
// 			for (int j = 0; j < n; j++) { // Loop over columns
// 				// Compare the cell with its 180-degree rotated counterpart
// 				if (arr[i][j] != arr[n - i - 1][n - j - 1]) {
// 					cnt++; // Increment the counter if they are different
// 				}
// 			}
// 		}

// 		cnt /= 2; // Each mismatch is counted twice, so divide by 2

// 		// Check if the number of mismatches can be corrected with k operations
// 		if (cnt > k) {
// 			cout << "NO" << endl; // Not enough operations to correct mismatches
// 		} else {
// 			// cout << cnt << ' '; // Calculate remaining operations after correcting mismatches

// 			// ll temp = k - cnt;
// 			cout << temp << ' '; // Calculate remaining operations after correcting mismatches
// 			// Check if the remaining operations can be used to make the pattern symmetric
// 			if (temp % 2 == 0) {
// 				cout << "YES" << endl; // Even number of operations left, pattern can be symmetric
// 			} else {
// 				if (n % 2 == 0) {
// 					cout << "NO" << endl; // Odd operations left and even n, cannot be symmetric
// 				} else {
// 					cout << "YES" << endl; // Odd operations left and odd n, can be symmetric
// 				}
// 			}	
// 		}
// 	}
// 	// Time Complexity (TC): O(n^2)
// 	// Space Complexity (SC): O(n^2)
// }
