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
    	cin >> n >> m ;
    	vector <int> v(n);
    	for(int i = 0; i < n; i++) {
    		cin >> v[i];
    	}

    	sort(v.rbegin(), v.rend());
    	long long sum = 0;
    	for(auto x : v) {
    		if(m > 0) {
    			sum += (1ll * x * m);
    		    m--;
    		}
    	}

    	cout << sum << '\n';

    }

    return 0;


}