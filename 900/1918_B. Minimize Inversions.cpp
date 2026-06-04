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
    	vector<int> a(n), b(n);

    	for(int i = 0; i < n; i++) {
    		cin >> a[i];
    	}

    	for(int i = 0; i < n; i++) {
    		cin >> b[i];
    	}

    	vector < pair <int,int> > sum_pos(n);

    	for(int i = 0; i < n; i++) {
    		int sum = a[i] + b[i];
    		sum_pos[i] = {sum,i};
    	}

    	sort(sum_pos.begin(), sum_pos.end());

    	for(auto x : sum_pos) {
    		cout << a[x.second] << " ";
    	}
    	cout << "\n";

    	for(auto x : sum_pos) {
    		cout << b[x.second] << " ";
    	}
    	cout << "\n";
    }

    return 0;


}