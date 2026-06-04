#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >>  t;
    while(t--) {
    	int n;
    	cin >> n;
    	int need = n % 3;
    	if(need == 0) {
    		cout << "0\n";
    	}
    	else {
    		cout << 3 - need << "\n";
    	}
    }

    return 0;


}