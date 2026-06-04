#include<bits/stdc++.h>
using namespace std;

int F(int a, int b) {
	if(a > b) {
		return 1;
	}
	else if(a < b) {
		return -1;
	}
	else {
		return 0;
	}
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
    	int a1, a2, b1, b2;
    	cin >> a1 >> a2 >> b1 >> b2;
    	int ans = 0;
    	if((F(a1,b1) + F(a2,b2)) > 0) {
    		ans++;
    	}
    	if((F(a1,b2) + F(a2,b1)) > 0) {
    		ans++;
    	}
    	if((F(a2,b1) + F(a1,b2)) > 0) {
    		ans++;
    	}
    	if((F(a2,b2) + F(a1,b1)) > 0) {
    		ans++;
    	}

    	cout << ans << '\n';
    	
    }

    return 0;


}