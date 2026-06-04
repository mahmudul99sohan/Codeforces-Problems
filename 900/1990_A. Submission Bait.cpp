#include<bits/stdc++.h>
using namespace std;


void solve() {
	int n; cin >> n;
	// multiset<int> ml;
	map <int,int> mp;
	for(int i = 0; i < n; i++) {
		int x; cin >> x;
		// ml.insert(x);
		mp[x]++;
	}

	auto it = mp.rbegin();
	if((it-> second) % 2) {
		cout << "YES\n";
		return;
	}
	while(it != mp.rend()) {
		
		if((it-> second) % 2) {
			cout << "YES\n";
			return;
		}
		it++;
	}

	cout << "NO\n";
	return;


	// auto last = *(--ml.end());

	// if(ml.count(last) % 2) {
	// 	cout << "YES\n";
	// }
	// else {
	// 	cout << "NO\n";
	// }
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