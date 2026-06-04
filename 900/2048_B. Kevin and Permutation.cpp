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
    	vector <int> v(n + 1, -1);
    	int value = 1;
    	for(int i = k; i <= n; i += k) {
    		v[i] = value;
    		value++;
    	}

    	for(int i = 1; i <= n; i++) {
    		if(i % k != 0) {
    			v[i] = value;
    			value++;
    		}
    	}

    	for(int i = 1; i <= n; i++) {
    		cout << v[i] << " ";
    	}

    	cout << "\n";
    }

    return 0;


}