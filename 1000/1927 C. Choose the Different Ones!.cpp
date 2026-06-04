#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);


    int t;
    cin  >> t;
    while(t--) {
    	int n, m, k, val;
    	cin >> n >> m >> k;
    	set < int > A , B, both;
    	while(n--) {
    		cin >> val;
    		if(val <= k) {
    			A.insert(val);
    			both.insert(val);
    		}
    		
    	}
    	while(m--) {
    		cin >> val;
    		if(val <= k) {
    			B.insert(val);
    			both.insert(val);

    		}
    	}
    	if((A.size() >= (k/2)) and (B.size() >= (k/2) ) and (both.size() >= k) ) {
    		cout << "YES\n";
    	}
    	else {
    		cout << "NO\n";

    	}
    }
    

    return 0;


}


