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

    	for(int i = 0; i < n; i++) {
    		cin >> v[i];
    	}

    	sort(v.begin(), v.end());

    	long long dif = 0;
    	for(int i = 0; i < n; i += 2) {
    		long long temp = abs(1ll * v[i + 1] - 1ll * v[i]);
    		dif = max(temp, dif);
    	}

    	cout << dif << "\n";
    }

    return 0;


}