#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
    	int n, m, k;
    	cin >> n >> m >> k;
    	int v[n];
    	int val_1 = n;
    	int i = 0;
    	for(i ; i < (n -  m); i++) {
    		v[i] = val_1;
    		val_1--;
    	}
    	// cout << i << '\n';
    	int val_2 = 1;
    	for(i; i < n; i++) {
    		v[i] = val_2;
    		val_2++;
    	}

    	for(auto x : v) {
    		cout << x << " ";
    	}

    	cout << "\n";
    }

    return 0;


}