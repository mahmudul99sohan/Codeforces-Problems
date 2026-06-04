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
        
        set <int> st;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            st.insert(x);
        }
        int last = - 1, ans = 0;
        for(auto x : st) {
            if(last + 1 < x) {
                ans++;
                last = x;
            }
        }


        cout << ans << "\n";
        
    }

    return 0;


}


