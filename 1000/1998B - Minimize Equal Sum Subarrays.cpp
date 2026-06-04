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
    	vector <int> p(n);

    	for(int i = 0; i < n; i++) {
    		cin >> p[i];
    	}

    	for(int i = 1; i < n; i++) {
    		cout << p[i] << ' ';
    	}
    	cout << p[0] << '\n';
    }

    return 0;


}