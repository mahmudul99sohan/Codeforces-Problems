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
    	string s;
    	cin >> s;
    	// bool flag = true;
    	// int cnt_B = 0;
    	int index_fr_A = - 1;
    	for(int i = 0; i < n; i++) {
    		if(s[i] == 'A') {
    			// flag = false;
    			index_fr_A = i;
    			break;
    		}
    		// bool flag_2 = false;
    		// while(flag and s[i] == 'B') {
    		// 	cnt_B++;
    		// 	i++;
    		// 	flag_2 = true;
    		// }
    		// if(flag_2) {
    		// 	i--;
    		// }
    	}

    	int index_L_B = - 1;
    	for(int i = n - 1; i > 0; i--) {
    		if(s[i] == 'B') {
    			// flag = false;
    			index_L_B = i;
    			break;
    		}
    	}
    	// cout << index_fr_A << " " << index_L_B << ' ';

    	if(index_L_B == -1 or index_fr_A == -1 or index_L_B < index_fr_A) {
    		cout << "0\n";
    	}
    	else {
    		cout << index_L_B - index_fr_A  << '\n';
    	}


    	// cout << n - 1 - cnt_B << '\n';
    }

    return 0;


}






















