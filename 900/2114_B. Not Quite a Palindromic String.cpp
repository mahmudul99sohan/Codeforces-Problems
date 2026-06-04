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
    	string s;
    	cin >> s;
    	int cnt_z = 0, cnt_one = 0;
    	for(auto x : s) {
    		if(x == '1') {
    			cnt_one++;
    		}
    		else {
    			cnt_z++;
    		}
    	}
    	
    	int minn = abs(cnt_z - cnt_one) / 2;
    	int maxx = (cnt_z / 2) + (cnt_one / 2);
    	if(k >= minn and k <= maxx and (k - minn) % 2 == 0) {
    		cout << "YES\n";
    	}
    	else {
    		cout << "NO\n";
    	}
    }

    return 0;


}