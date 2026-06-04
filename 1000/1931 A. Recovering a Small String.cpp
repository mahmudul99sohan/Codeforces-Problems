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
    	if(n >= 3 and n <=27) {
    		cout << "aa" << char(int('a') + n - 2 - 1) << '\n';
    	}
    	else if(n >= 28 and n <= 52) {
    		cout << "a" << char(int('a') + n - 27 - 1) << "z\n";
    	}
    	else if(n >= 53 and n <= 78) {
    		cout << char(int('a') + n - 52 - 1) << "zz\n";
    	}
    	
    }
    

    return 0;


}
