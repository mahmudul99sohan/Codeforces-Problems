#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
    	int n, c; cin >> n >> c;
    	vector <int> a(n);

    	for(auto &x : a) {
    		cin >> x;
    	}

    	sort(a.rbegin(), a.rend());


    	int free = 0;

    	for(auto x : a) {
    		if(x * (1ll << free) <= c) {
    			free++;
    		}
    	}


    	cout << n - free << "\n";
    }

    return 0;


}