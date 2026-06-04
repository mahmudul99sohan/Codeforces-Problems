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
    	string s;
    	cin >> s;
    	int x = 0, y = 0;
    	map < pair<int,int>, int> mp;
    	// x >= -10 and x <= 10 and y >= -10 and y <= 10 
    	int cnt = 20;
    	while(cnt--) {
    		for(auto ch : s) {
	    		if(ch == 'N') {
	    			y++;
	    			mp[{x,y}]++; 
	    		}
	    		else if(ch == 'S') {
	    			y--;
	    			mp[{x,y}]++;
	    		}
	    		else if(ch == 'E') {
	    			x++;
	    			mp[{x,y}]++;

	    		}
	    		else if(ch == 'W') {
	    			x--;
	    			mp[{x,y}]++;
	    			
	    		}
    		}
    	}


    	if(mp[{a,b}] > 0) {
    		cout << "YES\n";
    	}
    	else {
    		cout << "NO\n";
    	}
    	
    }

    return 0;


}