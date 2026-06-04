#include<bits/stdc++.h>
using namespace std;


void solve() {
	string s;
	cin >> s;

	int n = s.size();
	if(n == 1) {
		cout << "-1\n";
		return;
	}
	for(int i = 0; i < n - 1; i++) {
		if(s[i] == s[i + 1]) {
			cout << s[i] << s[i + 1] << "\n";
			return;
		}
	}
	for(int i = 1; i < n - 1; i++) {
		if((s[i] != s[i - 1]) and (s[i] != s[i + 1]) and (s[i - 1] != s[i + 1])) {
			cout << s[i - 1] << s[i] << s[i + 1] << "\n";
			return;
		}
	}
	cout << "-1\n";
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