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
    	string a, b, c;
    	cin >> a;
    	int m;
    	cin >> m;
    	cin >> b >> c;
    	for(int i = 0; i < m; i++) {
    		if(c[i] == 'D') {
    			a += b[i];
    		}
    	}
    	string temp ="";
    	for(int i = m - 1; i >= 0; i--) {
    		if(c[i] == 'V') {
    			temp += b[i];
    		}
    	}
    	// cout << temp <<"\n";
    	cout << temp + a << "\n";

    }

    return 0;


}