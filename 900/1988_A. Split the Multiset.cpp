#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
    	int n,  k;
    	cin >> n >> k;
    	if(n == 1) {
    		cout << "0\n";
    		continue;
    	}
    	int steps = (n - 2) / (k - 1);
    	steps++;
    	cout << steps << "\n";
    }

    return 0;


}