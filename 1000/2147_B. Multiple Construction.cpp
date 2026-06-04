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
    	vector <int> v(2 * n);
    	v[0] = n;
    	v[n] = n;
    	int L = n, R = n;
    	
    	for(int i = 1; i < n; i++) {
    		L--;
    		R++;
    		v[L] = i;
    		v[R] = i;
    	}

    	for(auto x : v) {
    		cout << x << " ";
    	}
    	cout << "\n";
    }

    return 0;


}