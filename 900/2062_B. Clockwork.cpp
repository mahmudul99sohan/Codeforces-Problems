#include<bits/stdc++.h>
using namespace std;


void solve() {
	int n;
	cin >> n;
	vector <int> v(n + 1);
	for(int i = 1; i <= n; i++) {
		cin >> v[i];
	}
	for(int i = 1; i <= n; i++) {
		if((v[i] <= (2 * (i - 1))) or (v[i] <= (2 * (n - i)))) {
			cout << "NO\n";
			return;
		}
	}

	cout << "YES\n";
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