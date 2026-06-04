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
    	string ss = s;

    	sort(ss.begin(), ss.end());

    	int len = s.size();


    	for(int i = 0; i < n; i++) {
    		if(ss[i] == s[i]) {
    			len--;
    		}
    	}

    	cout << len / 2 << '\n';
    }

    return 0;


}