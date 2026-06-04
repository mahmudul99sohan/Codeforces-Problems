
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
        sort(v.begin(), v.end());
        map<int,int> st;
        for(int i = 0; i < n; i++) {
            st[v[i]]++;
        }

        for(int i = 0; i <= 101; i++) {
            if(st[i] == 0) {
                cout << i << "\n";
                break;
            }
        }

    }

    return 0;


}