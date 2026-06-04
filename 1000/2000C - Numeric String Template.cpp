#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
    	int n; cin >> n;
    	vector <int> v(n + 1);
        map <int,vector <int> > mp;
        for(int i = 1; i <= n; i++) {
            cin >> v[i];
            mp[v[i]].push_back(i);
        }

        vector < vector <int> > vp;
        for(auto[key, vec] : mp) {
            vp.push_back(vec);
        }
        sort(vp.begin(), vp.end());
    	int m; cin >> m;
    	for(int i = 0; i < m; i++) {
    		string s;
    		cin >> s;
            map <char,vector <int> > mp_s;
            int len = s.size();
            if(len != n) {
                cout << "NO\n";
                continue;
            }
            for(int i = 0; i < len; i++) {
                mp_s[s[i]].push_back(i + 1);
            }
            vector < vector <int> > vp_s;
            for(auto [ch, vec] : mp_s) {
                vp_s.push_back(vec);
            }

            sort(vp_s.begin(), vp_s.end());


            if(vp == vp_s) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }

    		
    	}
    }

    return 0;


}