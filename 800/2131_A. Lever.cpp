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
    	vector <int> a(n), b(n);

    	for(int i = 0; i < n; i++) {
    		cin >> a[i];
    	}

    	for(int i = 0; i < n; i++) {
    		cin >> b[i];
    	}
    	int a_g_b = 0, a_L_b = 0;
    	for(int i = 0; i < n; i++) {
    		if(a[i] > b[i]) {
    			a_g_b += abs(a[i] - b[i]);
    		}
    		// else{
    		// 	a_L_b += abs(a[i] - b[i]);

    		// }
    	}

    	cout << a_g_b + 1 << "\n";
    }

    return 0;


}


