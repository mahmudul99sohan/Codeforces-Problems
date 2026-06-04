#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
    	int n, k;
    	cin >> n >> k;
    	// vector <int> v(n);
    	map <int,int> mp;
    	for(int i = 0; i < n; i++) {
    		int x; cin >> x;
    		mp[x]++;
    	}


    	// for(auto[x,y] : mp) {
    	// 	cout << x << " "<< y << "\n";
    	// }

    	int cnt = 0;
    	for(int i = 1; i <= n; i++) {
    		if(i == k - i) {
    			while(mp[i] > 1 and mp[k - i] > 1) {
					cnt++;
					mp[k - i]--;
					mp[i]--;
	    		}
    		}
    		else {
    			while(mp[i] > 0 and mp[k - i] > 0) {
					cnt++;
					mp[k - i]--;
					mp[i]--;
	    		}
    		}
    		
    	}


    	cout << cnt << "\n";


    }

    return 0;


}