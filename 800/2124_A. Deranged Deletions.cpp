#include<bits/stdc++.h>
using namespace std;
int v[150];

pair <int,int> solve() {
	int n;
	cin >> n;
	// vector <int> v(n);
	for(int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int ind_i = 0, ind_j = 0;

	if(n > 1) {
		for(int i = 0; i < n; i++) {
    		for(int j = i + 1; j < n; j++) {
    			if(v[i] > v[ j]) {
    				return {i, j};
    			} 
    		}
    		// break;
    	}
	}

	return {ind_i,ind_j};
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
    	auto x = solve();
    	if(x.first == 0 and x. second == 0) {
    		cout << "NO\n";
    	}
    	else {
    		cout << "YES\n";
			cout << "2\n";
			cout << v[x.first] << " " << v[x.second] << "\n";
    	}

    }

    return 0;


}