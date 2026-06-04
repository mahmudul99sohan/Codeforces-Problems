#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    map <long long,long long> mp;
    for(int  i = 0; i <= 20; i++) {
    	long long k = pow(3,i);
    	long long val = pow(3, (i + 1)) + (i * pow(3, (i - 1)));
    	mp[k] = val;
    }

    int t;
    cin >> t;
    while(t--) {
    	int n;
    	cin >> n;

    	long long sum = 0;
    	for(auto it = mp.rbegin(); it != mp.rend(); it++) {
    		while(1ll * n >= (*it).first) {
    			n -= (*it).first;
    			sum += (*it).second;
    		}
    	}

    	cout << sum << '\n';

    }

    return 0;


}