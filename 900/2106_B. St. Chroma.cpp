#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
    	int n, x;
    	cin >> n >> x;
    	for(int i = 0; i < n; i++) {
    		if(i == x ) {
    			continue;
    		}
    		cout << i << " ";
    	}
    	if(x != n) {
    		cout << x << "\n";
    	}
    }

    return 0;


}