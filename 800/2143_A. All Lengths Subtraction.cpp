#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector <int> a(n);

	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for(int i = 1; i < n - 1; i++) {
		if(a[i] < a[i - 1]  and a[i] < a[i + 1]) {
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