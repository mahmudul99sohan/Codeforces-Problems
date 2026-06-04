#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
    	int n, m;
    	cin >> n >> m;
    	vector <int> a(m);
    	for(int i = 0; i < m; i++) {
    		cin >> a[i];
    	}
    	if(m == 1) {
    		cout << n - a[0] + 1 << "\n";
    	}
    	else {
    		bool flag = true;
    		for(int i = 0; i < m - 1; i++) {
    			if(a[i] >= a[i + 1]) {
    				flag = false;
    			}
    		}

    		if(flag) {
    			cout << n - a[m - 1] + 1 << '\n';
    		}
    		else {
    			cout << "1\n";
    		}
    	}
    }

    return 0;


}