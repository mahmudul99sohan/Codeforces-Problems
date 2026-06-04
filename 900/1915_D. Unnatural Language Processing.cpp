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
    	string s;
    	cin >> s;
    	for(int i = 0; i < n; i++) {
    		cout << s[i];
    		if((s[i] == 'a' or s[i] == 'e') and 
    			(s[i + 1] == 'b' or s[i + 1] == 'c' or s[i + 1] == 'd') and 
    			(s[i + 2] == 'b' or s[i + 2] == 'c' or s[i + 2] == 'd')) {
  
				cout << s[i + 1];
				cout << ".";
				i++;
    			
    		}
    		else if((s[i] == 'a' or s[i] == 'e') and 
    			(s[i + 1] == 'b' or s[i + 1] == 'c' or s[i + 1] == 'd') and 
    			(s[i + 2] == 'a' or s[i + 2] == 'e')) {
    			cout << '.';
    		}
    	}
    	cout << '\n';
    }

    return 0;


}