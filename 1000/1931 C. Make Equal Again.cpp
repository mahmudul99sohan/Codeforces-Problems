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
    	vector<int> v(n + 1);
    	for(int i = 1; i <= n; i++) {
    		cin >> v[i];
    	}
    	int a = v[1], b = v[n];
        int L = 1 , R = n;

        for(int i = 2; i <= n; i++) {
            if(v[i] == a) {
                L = i;
            }
            else {
                break;
            }
        }
       
        int cnt_b = 1;
        for(int i = n - 1; i > 0; i--) {
            if(v[i] == b) {
                R = i;
                cnt_b++;
            }
            else {
                break;
            }
        }
        

        if(a == b) {
            // cout << "1  : \n";
            if(L == n or R == 1) {
                cout << "0\n";
            }
            else {
                cout << (R - 1) - (L + 1) + 1 << '\n';
            }
        }
        else {
            if(L > cnt_b) {
            // cout << "2 : \n";

                cout << (n) - (L) << '\n';

            }
            else {
            // cout << "3 : \n";

                cout << (n) - (cnt_b) << '\n';6

            }
        }

    }

    return 0;


}
