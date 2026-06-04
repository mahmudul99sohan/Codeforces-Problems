#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
    	int n;  cin >> n;
    	vector <long long> a(n);

    	for(int i = 0; i < n; i++) {
    		cin >> a[i];
    	}
    	long long sum = 0;
    	for(int i = 0; i < n - 2; i++) {
    		sum += a[i];
    	}

    	a[n - 2] -= sum;

    	a[n - 1] -= a[n - 2];

    	cout << a[n - 1] << "\n"; 


    }

    return 0;


}