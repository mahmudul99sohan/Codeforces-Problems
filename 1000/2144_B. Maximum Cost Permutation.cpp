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
    	vector <int> v(n);

    	set <int> st;
    	for(int i = 1; i <= n; i++) {
    		st.insert(i);
    	}

    	for(int i = 0; i < n; i++) {
    		cin >> v[i];
    		if(v[i] != 0) {
    			st.erase(v[i]);
    		}
    	}
    	auto it = st.end();
    	for(int i = 0; i < n; i++) {
    		if(v[i] == 0) {
    			v[i] = *(--it);
    		}
    	}

    	int left = -1, right = -1;
    	for(int i = 0; i < n; i++) {
    		if(i + 1 != v[i]) {
    			left = i;
    			break;
    		}
    	}

    	for(int i = n - 1; i >= 0; i--) {
    		if(i + 1 != v[i]) {
    			right = i;
    			break;
    		}
    	}

    	if(left == -1 and right == -1) {
    		cout << "0\n";
    	}
    	else {
    		cout << abs(right - left + 1) << "\n";
    	}
    	




    }

    return 0;


}