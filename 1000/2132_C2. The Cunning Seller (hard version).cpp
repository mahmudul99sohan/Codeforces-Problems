#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    map <long long,long long> mp;
    for(int  i = 0; i <= 20; i++) {
    	long long k = pow(3,i);
    	long long val = pow(3, (i + 1)) + (i * pow(3, (i - 1)));
    	mp[k] = val;
    }

    int t;
    cin >> t;
    while(t--) {
    	int nnn, k;
    	cin >> nnn >> k;

    	
    	long long ans = 3e12;
    	for(auto it_1 = mp.rbegin(); it_1 != mp.rend(); it_1++) {
    		long long sum = 0;
    		int cnt = 0;
    		int n = nnn;
    		for(auto it = it_1; it != mp.rend(); it++) {
    		
	    		if(1ll * n >= (*it).first) {

	    			while((1ll * n >= (*it).first) and cnt <= k) {
	    				cnt++;
		    			n -= (*it).first;
		    			sum += (*it).second;
		    		}
	    		}
	    	}
	    	if(sum > 0 and cnt <= k) {
	    		ans = min(ans, sum);
	    	}
    	}
    	if(ans < 3e12) {
    		cout << ans << '\n';
    	}
    	else {
    		cout << "-1\n";

    	}

    }

    return 0;


}