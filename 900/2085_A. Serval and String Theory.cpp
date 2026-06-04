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
    	string sr = s;
    	reverse(sr.begin(), sr.end());
    	set <int> st;
    	for(auto x : s ){
    		st.insert(x);
    	}
    	if(k == 0) {
    		if(s < sr) {
    			cout << "YES\n";
    		}
    		else {
    			cout << "NO\n";
    		}
    	}
    	else {
    		if(st.size() == 1) {
    			cout << "NO\n";
    		}
    		else {
    			cout << "YES\n";
    		}
    	}
    }

    return 0;


}