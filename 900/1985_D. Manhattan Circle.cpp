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
    	vector <string> v;
    	for(int i = 0; i < n; i++) {
    		// vector <char> temp;
    		// for(int j = 0; j < m; j++) {
    		// 	char x; cin >> x;
    		// 	temp.push_back(x);
    		// }

    		string s;
    		cin >> s;

    		v.push_back(s);
    	}

    	// for(int i = 0; i < n; i++) {
    	// 	cout << v[i] << "\n";
    	// }
    	int len_h = 0;
    	int len_v = 0;
    	pair < pair < int,int>, pair <int,int> > cor_h;
    	for(int i = 0; i < n; i++) {
    		// cout << "a ";
    		for(int j = 0; j < m; j++) {

    			int len = 0;
    			int initial_j = j;
    			while(j < m and v[i][j] == '#') {
    				// cout << "a ";
    				len++;
    				j++;
    			}
    			int final_j = j - 1;
    			
    			if(len_h <= len) {
    				len_h = len;
    				cor_h = {{i + 1,initial_j + 1}, {i + 1,final_j + 1}};
    			}
    		}
    	}
    	// cout << len_h << " " << len_v << "\n";
    	
    	pair < pair < int,int>, pair <int,int> > cor_v;
    	for(int i = 0; i < m; i++) {
    		for(int j = 0; j < n; j++) {
    			int len = 0;
    			int initial_j = j;
    			while( j < n and v[j][i] == '#') {
    				len++;
    				j++;
    			}
    			int final_j = j - 1;
    			if(len_v <= len) {
    				len_v = len;
    				cor_v = {{initial_j + 1,i + 1}, {final_j + 1,i + 1}};
    			}
    		}
    	}

    	// cout << len_h << " " << len_v << "\n";
    	// cout << cor_h.first.first << " " << cor_h.first.second << " " << cor_h.second.first << " " << cor_h.second.second << "\n";
    	// cout << cor_v.first.first << " " << cor_v.first.second << " " << cor_v.second.first << " " << cor_v.second.second << "\n";

    	cout << (cor_v.first.first + cor_v.second.first) / 2  << " " << (cor_h.first.second + cor_h.second.second) / 2 << "\n";
    }

    return 0;


}