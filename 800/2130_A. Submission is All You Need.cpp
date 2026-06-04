#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
    	int n; cin >> n;
    	vector <int> s;
    	// int cnt_zero = 0;
    	for(int i = 0; i < n; i++) {
    		int x; cin >> x;
    		s.push_back(x);
    	}
    	int sum = 0;
		for(int i = 0; i < n; i++) {
			if(s[i] == 0) {
				sum += 1;
			}
			else {
				sum += s[i];
			}
		}

    	cout << sum << "\n";
    	
    }

    return 0;


}