#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> A(n, vector<int>(m));
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> A[i][j];
		}
	}

	if(n == 1) {
		cout << "1\n";
		return;
	}
	for(int i = 0; i < n; i++) {
		sort(A[i].begin(), A[i].end());
	}

	// for(int i = 0; i < n; i++) {
	// 	for(int j = 0; j < m; j++) {
	// 		cout << A[i][j] << " ";
	// 	}
	// 	cout << "\n";
	// }

	map <int,int> mp;
	for(int i = 0; i < n; i++) {
		mp[A[i].front()] = i;
	}

	// for(auto[x,y] : mp) {
	// 	cout << x << " " << y << '\n';
	// }

	// for(int j = 0; j < m; j++) {
	// 	vector <int> temp;
	// 	for(auto[x,y] : mp) {
	// 		temp.push_back(A[y][j]);
	// 	}
	// 	int len = temp.size();
	// 	for(int i = 0; i < len - 1; i++) {
	// 		if(temp[i] > temp[i + 1]) {
	// 			cout << "-1\n";
	// 			return;
	// 		}
	// 	}
	// }

	for(auto[x,y] : mp) {
		int val = x;
		for(int j = 1; j < m; j++) {
			val +=  n;
			if(A[y][j] != val) {
				cout << "-1\n";
				return;
			}
		}
	}


	for(auto[x,y] : mp) {
		cout << y + 1 << " "; 
	}
	cout << "\n";
	return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {

    	solve();

    }

    return 0;


}