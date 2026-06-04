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
    	int zero = 0, neg_one = 0;
    	for(int i = 0; i < n; i++) {
    		int x;
    		cin >> x;
    		if(x == 0) {
    			zero++;
    		}
    		else if(x == -1) {
    			neg_one++;
    		}

    	}

    	cout << (neg_one % 2 ) * 2 + zero << "\n";


    }

    return 0;


}