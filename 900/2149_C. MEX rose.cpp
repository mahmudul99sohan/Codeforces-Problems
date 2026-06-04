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
    	multiset <int> st;
    	for(int i = 0; i < n; i++) {
    		int x; cin >> x;
    		st.insert(x);
    	}
    	int les_k = 0;
    	for(int i = 0; i < k; i++) {
    		if(st.count(i) == 0) {
    			les_k++;
    		}
    	}
    	int num_k = st.count(k);
    	
    	cout << max(num_k, les_k) << "\n";
    }

    return 0;


}