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
    	vector <int> v(n + 1);
    	for(int i = 1; i <= n; i++) {
    		cin >> v[i];
    	}

    	int max_em = v[1];

    	for(int i = 1; i <= n; i++) {
    		max_em = max(max_em, v[i]);
    		if(i % 2 == 0) {
    			v[i] = max_em;
    		}
    	}
    	int ans = 0;
    	for(int i = 1; i <= n; i++) {
    		if(i % 2 == 1) {
    			if(i == 1) {
    				if(v[i] >= v[i + 1]) {
    					ans += (abs(v[i] - v[i + 1]) + 1);
    				}
    			}
    			else if(i > 1 and i < n) {
    				int dif = 0;
    				if(v[i] >= v[i + 1]) {
    					dif = max(dif, (abs(v[i] - v[i + 1]) + 1));
    				}
    				if(v[i] >= v[i - 1]) {
    					dif = max(dif, (abs(v[i] - v[i - 1]) + 1));
    					// ans += (abs(v[i] - v[i - 1]) + 1)
    				}

    				ans += dif;
    			}
    			else if(i == n) {
    				if(v[i] >= v[i - 1]) {
    					ans += (abs(v[i] - v[i - 1]) + 1);
    				}
    			}

    		}
    	}

    	cout << ans << '\n';

    	

    }

    return 0;


}