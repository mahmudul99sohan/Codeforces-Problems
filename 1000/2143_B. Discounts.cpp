#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
    	int n, k;
    	cin >> n >> k;
    	vector <int> a(n), b(k);
    	for(int i = 0; i < n; i++) {
    		cin >> a[i];
    	}

    	for(int i = 0; i < k; i++) {
    		cin >> b[i];
    	}

    	sort(a.begin(), a.end());
    	sort(b.begin(), b.end());
    	int b_i = 0;
    	long long sum = 0;
    	for(int i = n - 1; i >= 0; i--) {
    		if(b_i >= k) {
    			while(i >= 0) {
    				sum += 1ll * a[i];
    				i--;
    			}
    			break;
    		}
    		int j = i;
    		for(; j >= i - b[b_i] + 2 and j >= 0; j--) {
    			sum += 1ll * a[j];
    		}
    		i = j;
    		b_i++;

    	}

    	cout << sum << '\n';
    	
    }

    return 0;


}