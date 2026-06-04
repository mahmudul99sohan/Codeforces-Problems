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
    	long long max_ele = 0, sum = 0, cnt = 0;

    	for(int i = 0; i < n; i++) {
    		sum += v[i];
    		max_ele = max(max_ele,1ll * v[i]);
    		long long temp_sum = sum;
    		temp_sum -= max_ele;
    		if(max_ele == temp_sum) {
    			cnt++;
    		}
    	}

    	cout << cnt << '\n';
    	
    }

    return 0;


}









