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
    	vector <int> a(n), b(n);
    	for(int i = 0; i < n; i++) {
    		cin >> a[i];
    	}

    	for(int i = 0; i < n; i++) {
    		cin >> b[i];
    	}
    	vector <int> a_les_b;
    	int min_dif_a_get_b = 1e9;
    	for(int i = 0; i < n; i++) {
    		if(a[i] >= b[i]) {
    			min_dif_a_get_b = min(min_dif_a_get_b, abs(a[i] - b[i]));
    		}
    		else {
    			a_les_b.push_back(abs(a[i] - b[i]));
    		}
    	}
    	
    	int len = a_les_b.size();
    
    	if(len > 1) {
    		cout << "NO\n";
    		
    	}
    	else if(len == 1) {
    		if(min_dif_a_get_b >= a_les_b[0]) {
    			cout << "YES\n";
	    	}
	    	else {
	    		cout << "NO\n";
	    	}
    	}
    	else {
    		cout << "YES\n";
    	}

  


    }

    return 0;


}