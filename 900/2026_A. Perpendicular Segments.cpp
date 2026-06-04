#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
    	int X, Y, K;
    	cin >> X >> Y >> K;
    	int min_val = min(X,Y);
    	cout << 0 << " " << 0 << " " << min_val << " " << min_val << "\n";
    	cout << 0 << " " << min_val << " " << min_val << " " << 0 << "\n";
    }

    return 0;


}