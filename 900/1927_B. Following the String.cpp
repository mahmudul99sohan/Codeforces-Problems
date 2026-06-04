// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while(t--) {
//     	int N = 2e5 + 5;
// 		string S = "zyxwvutsrqponmlkjihgfedcba";
// 		vector <string> ANS(N,S);
//     	int n; cin >> n ;
//     	vector <int> a(n);
//     	for(int i = 0; i < n; i++) {
//     		cin >> a[i];
//     	}
//     	for(int i = 0; i < n; i++) {
//     		cout << ANS[a[i]].back();
//     		ANS[a[i]].pop_back();
//     	}
    	
//     	cout << "\n";


//     }

//     return 0;


// }



#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
    	int n; cin >> n ;
    	vector <int> a(n);
    	for(int i = 0; i < n; i++) {
    		cin >> a[i];
    	}
    	vector <int> occur(26,0);
    	string s = "";
    	for(int i = 0; i < n; i++) {
    		for(int j = 0; j < 26; j++) {
    			if(a[i] == occur[j]) {
    				s += 'a' + j;
    				occur[j]++;
    				break;
    			}
    		}

    	}
    	
    	cout << s << "\n";


    }

    return 0;


}
