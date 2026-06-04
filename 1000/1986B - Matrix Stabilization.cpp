#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
    	int n, m;
    	cin >> n >> m;
    	vector < vector <int> > v;

    	for(int i = 0; i < n; i++) {
    		vector <int> temp(m);
    		for(int j = 0; j < m; j++) {
    			cin >> temp[j];
    		}
    		v.push_back(temp);
    	}

    	// for(int i = 0; i < n; i++) {
    	// 	for(int j = 0; j < m; j++) {
    	// 		cout << v[i][j] << ' ';
    	// 	}
    	// 	cout << "\n";
    	// }
    	// continue;

    	for(int i = 0; i < n; i++) {
    		for(int j = 0; j < m; j++) {
    			int max_nei = 0;
    			int i1 = i - 1;
    			int i2 = i + 1;
    			int j1 = j - 1;
    			int j2 = j + 1;

    			if(i1 >= 0) {
    				max_nei = max(max_nei, v[i1][j]);
    			}
    			if(i2 < n) {
    				max_nei = max(max_nei, v[i2][j]);
    			}
    			if(j1 >= 0) {
    				max_nei = max(max_nei, v[i][j1]);
    			}
    			if(j2 < m) {
    				max_nei = max(max_nei, v[i][j2]);
    			}

    			if(v[i][j] > max_nei) {
    				v[i][j] = max_nei;
    			}
    			
    		}
    	}


    	for(int i = 0; i < n; i++) {
    		for(int j = 0; j < m; j++) {
    			cout << v[i][j] << ' ';
    		}
    		cout << "\n";
    	}


    	

    }

    return 0;


}