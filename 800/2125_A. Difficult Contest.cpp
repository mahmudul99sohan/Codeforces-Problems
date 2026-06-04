#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
    	string s;
    	cin >> s;
    	int n = s.size();
    	string ff = "", tt = "", nn = "", others = "";
    	for(int i = 0; i < n; i++) {
    		if(s[i] == 'F') {
    			ff += s[i];
    		}
    		else if(s[i] == 'T') {
    			tt += s[i];
    		}
    		else if(s[i] == 'N') {
    			nn += s[i];
    		}
    		else {
    			others += s[i];

    		}
    	}

    	cout << tt + ff + nn + others << "\n";
    }

    return 0;


}