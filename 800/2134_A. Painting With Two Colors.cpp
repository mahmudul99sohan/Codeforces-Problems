#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
    	int n, a, b;
    	cin >> n >> a >> b;
    	if(a >= b) {
    		if((a - b) % 2 == 0 and (n - a) % 2 == 0) {
    			cout << "YES\n";
    		}
    		else {
    			cout << "NO\n";
    		}
    	}
    	else {
    		if((n - b) % 2 == 0) {
    			cout << "YES\n";
    		}
    		else {
    			cout << "NO\n";

    		}
    	}  
    }

    return 0;


}