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
    	int max_len_one = 0;
    	int len = 0;
    	for(int i = 0; i < n; i++) {
    		while(s[i] == '1' and i < n) {
    			len++;
    			i++;
    		}
    		max_len_one = max(max_len_one, len);
    		len = 0;
    	}

    	// cout << max_len_one << "\n";
    	if(max_len_one >= k) {
    		cout << "NO\n";
    	}
    	else {
    		int num = n;
    		cout << "YES\n";
    		vector <int> ans(n,0);
    		// for(int i = 0; i < n; i += k) {
    		// 	for(int j = i; j < i + k; j++) {
    		// 		if(s[j] == '0') {
    		// 			ans[j] = num;
    		// 			num--;
    		// 			break;
    		// 		}
    		// 	}
    		// }

    		// for(int i = 0; i < n; i++) {
    		// 	if(ans[i] == 0) {
    		// 		ans[i] = num;
    		// 		num--;
    		// 	}
    		// }
    		int num_s = 1;
    		for(int i = 0; i < n; i++) {
    			if(s[i] == '1') {
    				ans[i] = num_s;
    				num_s++;
    			}
    		}
    		for(int i = 0; i < n; i++) {
    			if(s[i] == '0') {
    				ans[i] = num;
    				num--;
    			}
    		}

    		for(auto x : ans) {
    			cout << x << " ";
    		}
    		cout << "\n";

    	}
    }

    return 0;


}