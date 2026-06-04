#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
    	int n; cin >> n;
    	vector <int> v(n);
    	for(auto &x : v) {
    		cin >> x;
    	}
    	sort(v.begin(), v.end());
    	int  a = v[0];
    	if(a == 1) {
    		cout << "YES\n";
    	}
    	else {
    		vector <int> temp;
	    	for(int i = 0; i < n; i++) {
	    		if(v[i] % a ) {
	    			temp.push_back(v[i]);
	    		}
	    	}
	    	sort(temp.begin(), temp.end());
	    	n = temp.size();
	    	bool flag = 1;
	    	for(int i = 0; i < n; i++) {
	    		if(temp[i] % temp[0]) {
	    			flag = 0;
	    		}
	    	}
	    	if(flag) {
	    		cout << "YES\n";
	    	}
	    	else {
	    		cout << "NO\n";
	    	}
    	}
    	
    }

    return 0;


}