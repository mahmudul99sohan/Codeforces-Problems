#include<bits/stdc++.h>
using namespace std;

int G[801][801];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
    	int n;
    	cin >> n;
    	vector<int> ans(((2 * n) + 1), 0);
    	for(int i = 1; i <= n; i++) {
    		for(int j = 1; j <= n; j++) {
    			cin >> G[i][j];
    			ans[i + j] = G[i][j];
    		}
    	}
    	int temp_i = -1;
    	set <int> st;
    	for(int i = 1; i <= 2 * n; i++) {
    		st.insert(i);
    	}


    	for(int i = 1; i <= 2 * n; i++) {
    		if(ans[i] == 0) {
    			temp_i = i;
       		}
       		else {
       			st.erase(ans[i]);
       		}

    	}

    	ans[temp_i] = *st.begin();

    	for(int i = 1; i <= 2 * n; i++) {
    		cout << ans[i] << " ";
    	}
    	cout << "\n";
    }

    return 0;


}