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
    	vector<int> v(n);
    	for(auto &x : v) {
    		cin >> x;
    	}

    	sort(v.begin(), v.end());

    	long long sum  = 0;

    	for(int i = n - 1; i >= 0; i -= 2) {
    		sum += 1ll * v[i];
    	}

    	cout << sum << "\n";

    }

    return 0;


}