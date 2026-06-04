#include<bits/stdc++.h>
using namespace std;


void solve() {
	int n , m;
	cin >> n >> m;
	vector <string> vs(n);
	for(int i = 0; i < n; i++) {
		cin >> vs[i];
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			bool flag_row = false, flag_col = false;
			if(i != 0 and j != 0 and vs[i][j] == '1') {
				for(int k = 0; k < i; k++) {
					if(vs[k][j] == '0') {
						flag_col = true;
					}
				}
				for(int k = 0; k < j; k++) {
					if(vs[i][k] == '0') {
						flag_row = true;
					}
				}

				if(flag_col and flag_row) {
					cout << "NO\n";
					return;
				}
				
			}
		}
	}

	cout << "YES\n";
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