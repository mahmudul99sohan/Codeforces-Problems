#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
    	int n; cin >> n;
    	vector <int> a(n);
    	int cnt_even = 0, cnt_odd = 0;
    	for(auto &x : a) {
    		cin >> x;
    		if(x % 2) {
    			cnt_odd++;
    		}
    		else {
    			cnt_even++;
    		}
    	}

    	if(cnt_even >= 1 and cnt_odd >= 1) {
    		sort(a.begin(), a.end());
    		for(auto x : a) {
    			cout << x << " ";
    		}
    	}
    	else {
    		for(auto x : a) {
    			cout << x << " ";
    		}
    	}

    	cout << "\n";

    }

    return 0;


}

























// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int q;
//     cin >> q;
//     while(q--) {
//     	int n; cin >> n;
//     	string s, t;
//     	cin >> s >> t;
//     	int ans = 0;

//     	for(auto x : s) {
//     		ans ^= int(x);
//     	}
//     	for(auto x : t) {
//     		ans ^= int(x);
//     	}

//     	if(ans == 0) {
//     		cout << "YES\n";
//     	}
//     	else {
//     		cout << "NO\n";
//     	}
//     }

//     return 0;


// }























// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while(t--) {
//     	set <int> a;
//     	for(int i = 0; i < 4; i++) {
//     		int x; cin >> x;
//     		a.insert(x);
//     	}
//     	if(a.size() == 1) {
//     		cout << "YES\n";
//     	}
//     	else {
//     		cout << "NO\n";
//     	}
//     }

//     return 0;


// }
































// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while(t--) {
//     	int n; cin >> n;
//     	vector <int> a(n);
//     	for(auto &x : a) {
//     		cin >> x;
//     	}
//     	set <int> st(a.begin(), a.end());

//     	st.erase(-1);

//     	if(st.size() <= 1 && !st.count(0)) {
//     		cout << "YES\n";
//     	}
//     	else {
//     		cout << "NO\n";
//     	}
//     }

//     return 0;


// }