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
    	vector <int> v(n);
    	for(int i = 0; i < n; i++) {
    		cin >> v[i];
    	}
    	if(n == 1) {
    		cout << "0\n";
    		continue;
    	}
    	vector <int> dif;
    	int minn = v[0];
    	for(int i = 1; i < n; i++) {
    		if(v[i] >= minn) {
    			minn = v[i];
    		}
    		else {
    			dif.push_back(abs(minn - v[i]));
    		}
    	}
    	sort(dif.begin(), dif.end());

    	// for(auto x : dif) {
    	// 	cout << x << " ";
    	// }


    	int len = dif.size();
    	int initial = 0;
    	long long sum = 0;
    	for(int i = 0; i < len; i++) {
    		long long temp = dif[i] - initial;
    		sum += (1ll * temp * (len - i + 1));
    		initial = dif[i];

    	}

    	cout << sum << '\n';



    }

    return 0;


}