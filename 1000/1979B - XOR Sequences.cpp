#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int x, y; 
        cin >> x >> y;
        int cnt = 0;
        while(x or y ) {
            if((x % 2) == (y  % 2)) {
                cnt++;
            }
            else {
                break;
            }
            x /= 2;
            y /= 2;
        }
        cout << (1 << cnt) << "\n";
    }

    return 0;


}