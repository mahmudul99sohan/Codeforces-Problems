#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
    	int a, b, c, d;
    	cin >> a >> b >> c >> d;

    	c -= a;
    	d -= b;

    	if(a < b) {
    		swap(a ,b);
    	}
    	if(c < d) {
    		swap(c, d);
    	}


    	int ans_b = (a + 2 - 1) / 2; 
    	int ans_d = (c + 2 - 1) / 2;

    	ans_b--; 
    	ans_d--; 

    	if(b >= ans_b and d >= ans_d) {
    		cout << "YES\n";
    	}
    	else {
    		cout << "NO\n";
    	}

    }

    return 0;


}