#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
    	int n, q;
    	string s;
    	cin >> n >> q >> s;
    	int cnt_b = 0;
    	for(auto ch : s) {
    		if(ch == 'B') {
    			cnt_b++;
    		}
    	}

    	for(int i = 0; i < q; i++) {
    		// int ;
    		int x; cin >> x;
    		if(cnt_b == 0) {
    			cout << x << '\n';
    		}
    		else {
    			int cnt = 0, pos = 0;
    			while(x != 0) {
    				if(s[pos] == 'A') {
    					x--;
    				}
    				else {
    					x /= 2;
    				}
    				cnt++;
    				pos++;
    				if(pos == n) {
    					pos = 0;
    				}

    			}
    			cout << cnt << '\n';
    		}

    	}
    }

    return 0;


}