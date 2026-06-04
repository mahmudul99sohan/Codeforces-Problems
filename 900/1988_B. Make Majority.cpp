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
    	string s;
    	cin >> s;
    	int cnt_zero_seg = 0, cnt_one = 0;
    	for(int i = 0; i < n; i++) {
    		if(s[i] == '1') {
    			cnt_one++;
    		}
    	}
    	for(int i = 0; i < n; i++) {
    		if(s[i] == '0') {
    			while(s[i] == '0') {
    				i++;
    			}
    			if(s[i] == '1') {
    				cnt_zero_seg++;
    			}
    		}

    	}
    	if(s[n - 1] == '0') {
    		cnt_zero_seg++;
    	}

    	// cout << cnt_zero_seg << "\n";

    	if(cnt_one > cnt_zero_seg) {
    		cout << "YES\n";
    	}
    	else {
    		cout << "NO\n";
    	}


    }

    return 0;


}