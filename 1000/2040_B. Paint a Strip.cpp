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
    	if(n < 2) {
    		cout << "1\n";
    	}
    	else {
    		int ans = 2;
	    	int cnt = 2;
	    	while(2 * ans < n) {
	    		ans *= 2;
	    		ans++;
	    		cnt++;	
	    	}
	    	cout << cnt << '\n';
    	}
    }

    return 0;


}