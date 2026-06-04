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
    	string a, b;
    	cin >> a >> b;
    	int cnt_one_a_ev_pos = 0, cnt_one_a_odd_pos = 0;
    	int cnt_zero_b_ev_pos = 0, cnt_zero_b_odd_pos = 0;
    	for(int i = 0; i < n; i++) {
    		if(i % 2 == 0 and a[i] == '1') {
    			cnt_one_a_ev_pos++;
    		}
    		if(i % 2 == 1 and a[i] == '1') {
    			cnt_one_a_odd_pos++;
    		}
    		if(i % 2 == 0 and b[i] == '0') {
    			cnt_zero_b_ev_pos++;
    		}
    		if(i % 2 == 1 and b[i] == '0') {
    			cnt_zero_b_odd_pos++;
    		}

    	}
    	if(cnt_one_a_odd_pos + cnt_one_a_ev_pos == 0) {
    		cout << "YES\n";
    		continue;
    	}
    	if(cnt_one_a_ev_pos > cnt_zero_b_odd_pos or cnt_one_a_odd_pos > cnt_zero_b_ev_pos) {
    		cout << "NO\n";
    	}
    	else {
    		cout << "YES\n";
    	}
    }

    return 0;


}