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
    	string s; cin >> s;
    	int pos = -1;
    	string new_s;
    	for(int i = n - 1; i >= 0; i--) {
    		if(s[i] == '1') {   
    			pos = i;
    			break;
    		}
    		new_s.push_back(s[i]);
    	}

    	for(int i = 0; i <= pos; i++) {
    		new_s.push_back(s[i]);
    	}
    	int max_cnt= 0;
    	for(int i = 0; i < n; i++) {
    		int cnt = 0;
    		while(i < n and new_s[i] == '0') {
    			cnt++;
    			i++;
    		}
    		max_cnt = max(max_cnt, cnt);
    	}

    	cout << max_cnt << '\n';
    }

    return 0;


}