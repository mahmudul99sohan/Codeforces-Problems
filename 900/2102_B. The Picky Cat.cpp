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
    	vector <int> a;

    	for(int i = 0; i < n; i++) {
    		int x; cin >> x;
    		a.push_back(abs(x));
    	}
    	int value = a[0];
    	sort(a.begin(), a.end());

    	int value_pos = find(a.begin(), a.end(),value) - a.begin();
    	// cout << value_pos << "\n";


    	int left_req = (n - 1) / 2;

    	if(value_pos == left_req or left_req <= n - value_pos - 1) {
    		cout << "YES\n";
    	}
    	else{
    		cout << "NO\n";
    	}

    }

    return 0;


}



