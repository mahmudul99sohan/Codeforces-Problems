#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
    	long long a, b, k;
    	cin >> a >> b >> k;
    	long long gcd = __gcd(a, b);

    	if(a / gcd <= k and b / gcd <= k) {
    		cout << "1\n";
    	}
    	else {
    		cout << "2\n";
    	}
    }

    return 0;


}