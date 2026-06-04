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
    	vector <long long> even, odd;
    	for(int i = 0; i < n ; i++) {
    		long long x; cin >> x;
    		if(x & 1) {
    			odd.push_back(x);
    		}
    		else {
    			even.push_back(x);

    		}
    	}

    	long long sum_even = accumulate(even.begin(), even.end(), 0ll);
    	sort(odd.rbegin(), odd.rend());

    	if(odd.size() == 0) {
    		cout << "0\n";
    	}
    	else if(odd.size() == 1) {
    		sum_even += odd[0];
    		cout << sum_even << '\n';
    	}
    	else {
    		int len = odd.size() / 2;
    		if(odd.size() % 2) {
    			len++;
    		}
    		for(int i = 0; i < len; i++) {
				sum_even += odd[i];
			}
			cout << sum_even << '\n';

    	}
    }

    return 0;


}