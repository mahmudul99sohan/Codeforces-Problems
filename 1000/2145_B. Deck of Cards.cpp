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
    	string s;
    	cin >> s;
    	int zero = 0, one = 0, two = 0;
        for(int i = 0; i < k; i++) {
            if(s[i] == '0') {
                zero++;
            }
            else if(s[i] == '1') {
                one++;
            }
            else if(s[i] == '2') {
                two++;
            }
        }
        

        for(int i = 0; i < n; i++) {
            // char ans;
            if(n == k || i < zero || i >= n - one) {
                cout << "-";
                // ans = '-';
            }
            else if(i >= zero + two and i < n - one - two ) {
                cout << "+";
                // ans = '+';
            }
            else {
                cout << "?";
                // ans = '?';
            }
            // cout << ans;
        }

        cout << "\n";

    	
    }

    return 0;


}