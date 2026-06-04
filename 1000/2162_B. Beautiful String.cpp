



/// This is my way this code Accepted








// #include<bits/stdc++.h>
// using namespace std;


// bool check_non_decr(string p) {
// 	if(p.size() <= 1) {
// 		return true;
// 	}
// 	for(int i = 1; i < p.size(); i++) {
// 		if(p[i] < p[i - 1]) {
// 			return false;
// 		}
// 	}
// 	return true;
// }

// bool check_palindrome(string x) {
// 	int len = x.size();
// 	for(int i = 0; i < (len / 2); i++) {
// 		if(x[i] != x[len - i - 1]) {
// 			return false;
// 		}
// 	}
// 	return true;
// }



// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while(t--) {
//     	int n;
//     	string s;
//     	cin >> n >> s;
//     	bool flag = true;
//     	for(int mask = 0; mask < (1 << n); mask++) {
//     		string p = "", x = "";
//     		vector <int>  p_index;
//     		for(int i = 0; i < n; i++) {
//     			if(mask & (1 << i)) {
//     				p += s[i];
//     				p_index.push_back(i + 1);
//     			}
//     			else {
//     				x += s[i];
//     			}
//     		}

//     		if(check_non_decr(p) and check_palindrome(x)) {
//     			cout << p.size() << '\n';
//     			for(auto pos : p_index) {
//     				cout << pos << " ";
//     			}
//     			cout << "\n";
//     			flag = false;
//     			break;
//     		}


//     	}
//     	if(flag) {
// 			cout << "-1\n";

//     	}
//     }

//     return 0;


// }










/// Another way from the tutorial 




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
    	string s;
    	cin >> n >> s;
    	vector <int> pos_index;
    	for(int i = 0; i < n; i++) {
    		if(s[i] == '0') {
    			pos_index.push_back(i + 1);
    		}
    	}

    	cout << pos_index.size() << "\n";

    	for(auto index : pos_index) {
    		cout << index << " ";
    	}
    	cout << "\n";
    }

    return 0;


}