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
    	set <int> a;
    	for(int i = 0; i < n; i++) {
    		int x; cin >> x;
    		a.insert(x);
    	}

    	if(a.size() < n) {
    		cout << "YES\n";
    	}
    	else{
    		cout << "NO\n";
    	}

    }

    return 0;


}