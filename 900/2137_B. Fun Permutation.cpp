#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
    	int n;
    	cin >> n;
    	vector <int> v(n);
    	for(int i = 0; i < n; i++) {
    		cin >> v[i];
    	}
    	if(n % 2) {
    		int max_odd = n;
    		for(int i = 0; i < n; i++) {
	    		if(v[i] != max_odd) {
	    			cout << max_odd - v[i] << " ";
	    		}
	    		else {
	    			cout << max_odd << " ";
	    		}
	    	}
    	}
    	else {
    		int max_odd = n + 1;
    		for(int i = 0; i < n; i++) {
	    		cout << max_odd - v[i] << " ";
	    	}
    	}

    	cout << "\n";
    }

    return 0;


}