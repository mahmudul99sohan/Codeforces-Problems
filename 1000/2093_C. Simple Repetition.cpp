#include<bits/stdc++.h>
using namespace std;


bool isprime(int n) {
	if(n == 1) {
		return false;
	}
	for(int i = 2; i * i <= n; i++) {
		if(n % i == 0) {
			return false;
		}
	}
	return true;
}


void solve() {
	int x, k;
	cin >> x >> k;
	if(k > 1 and x > 1) {
		cout << "NO\n";
	}
	else if(k == 1 and x >= 1) {
		cout << (isprime(x) ? "YES\n" : "NO\n");
	}
	else if(k == 2 and x == 1) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
	
	// cout << "YES\n";
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



