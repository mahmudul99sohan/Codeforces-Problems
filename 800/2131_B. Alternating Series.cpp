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
    	for(int i = 1; i <= n; i++) {
    		if(i % 2) {
    			cout << "-1 ";
    		}
    		else {
    			if(i == n) {
    				cout << "2 ";
    			}
    			else {
    			    cout << "3 ";
    			}
    		}
    	}
    	cout << "\n";
    }

    return 0;


}