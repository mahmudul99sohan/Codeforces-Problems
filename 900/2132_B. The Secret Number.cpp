#include<bits/stdc++.h>
using namespace std;

// long long power(int k) {
// 	long long temp = 1;
// 	for(int i = 0; i < k; i++) {
// 		temp *= 10;
// 	}
// 	return temp;
// }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
    	long long n;
    	cin >> n;
    	long long temp = 10;
    	int cnt = 0;
    	vector <long long> v;
    	while( n >= (temp + 1)) {
    		if(n % (temp + 1) == 0) {
    			cnt++;
    			v.push_back(n / (temp + 1));
    			// cout << n << " " << temp << "\n";
    		}
    		temp *= 10;

    	}
    	
    	cout << cnt << "\n";
    	sort(v.begin(), v.end());
    	if(cnt > 0) {
    		for(auto temp : v) {
    			cout << temp << " ";
    		}
    		cout << "\n";
    	}
    	// else {
    	// 	cout << "0\n";
    	// }
    }

    return 0;


}

