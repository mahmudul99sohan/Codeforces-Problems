#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
    	int n, f, a, b;
    	cin >> n >> f >> a >> b;
    	vector <int> m(n + 1, 0);
    	for(int i = 1; i <= n; i++) {
    		cin >> m[i];
    	}
    	// for(int i = 0; i <= n; i++) {
    	// 	cout << m[i] << " ";
    	// }

    	vector <long long> dif(n + 1);

    	for(int i = 0; i < n; i++) {
    		dif[i] = min(1ll * b, (1ll * abs(m[i + 1] - m[i]) * a));
    		// cout << dif[i] << " ";
    	}
    	// cout << "\n";
    	long long sum = 0;
    	for(int i = 0; i < n; i++) {
    		sum += dif[i];
    	}

    	if(sum < f) {
    		cout << "YES\n";
    	}
    	else {
    		cout << "NO\n";
    	}


    }

    return 0;


}