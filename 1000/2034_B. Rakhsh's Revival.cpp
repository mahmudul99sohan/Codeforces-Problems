#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
    	int n, m, k;
    	cin >> n >> m >> k;
    	string s;
    	cin >> s;
    	map <int,int> mp;
    	for(int i = 0; i < n; i++) {
    		int cnt = 0;
    		bool flag = false;
    		while(s[i] == '0') {
    			cnt++;
    			i++;
    			flag = true;
    		}
    		mp[cnt]++;
    		if(flag) {
    			i--;
    		}
    	}

    	int ans = 0;
    	for(auto[x,y] : mp) {
    		if(x < m) {
    			ans += 0;
    		}
    		else if(x == m) {
    			if(k >= x) {
    				ans++;
    			}
    			else {
    				ans += ((x + k - 1) / 2);
    			}
    		}
    		else {
    			if(k >= x) {
    				ans++;
    			}
    			else {
    				ans += ((x + (2 * m) - 1) / (2 * m));
    			}
    		}
    	}

    	cout << ans << '\n';
    }

    return 0;


}





