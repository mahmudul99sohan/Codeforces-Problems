#include<bits/stdc++.h>
using namespace std;

void solve () {
	string s; cin >> s;
	bool flag = true; 
	for(auto x : s) {
		if(x == ')' and flag == true) {
			flag = false;
		}
		if(x == '(' and flag == false) {
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
	return;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
    	solve();

    }

    return 0;


}