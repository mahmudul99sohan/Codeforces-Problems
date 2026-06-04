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
    	map <int,int> mp;
    	vector < pair <int, int> > vp;
    	for(int i = 0; i < n; i++) {
    		int x; cin >> x;
    		mp[x]++;
    	}

    	for(auto[x,y] : mp) {
    		vp.push_back({y,x});
    	}

    	sort(vp.begin(), vp.end());

    	for(auto x : vp) {
    		if(x.first <= k) {
    			k -= x.first;
    			mp[x.second] -= x.first;
    		}
    		else {
    			k = 0;
    			mp[x.second] -= k;
    		}
    	}

    	int cnt = 0;
    	for(auto[x,y] : mp) {
    		if(y > 0) {
    			cnt++;
    		}
    	}
    	if(cnt == 0) {
    		cnt++;
    	}
    	cout << cnt << '\n';

    }

    return 0;


}