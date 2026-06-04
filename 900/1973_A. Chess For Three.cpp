// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while(t--) {
//     	vector <int> a(3);
//     	cin >> a[0] >> a[1] >> a[2];

//     	if((a[0] + a[1] + a[2]) % 2 != 0) {
//     		cout << "-1\n";
//     		continue;
//     	}
    	
//     	sort(a.rbegin(), a.rend());
//     	if((a[1] + a[2]) <= a[0]) {
//     		cout << (a[1] + a[2]) << "\n";
//     		continue;
//     	}

//     	int cnt_3 = 0;
//     	while(a[0] >= 2 and a[1] >= 2 and a[2] >= 2) {
//     		a[0] -= 2;
//     		a[1] -= 2;
//     		a[2] -= 2;
//     		cnt_3++;
//     	}

//     	sort(a.rbegin(), a.rend());

//     	int cnt_2 = 0;
//     	while(a[0] >= 2 and a[1] >= 1 and a[2] >= 1) {
//     		a[0] -= 2;
//     		a[1] -= 1;
//     		a[2] -= 1;
//     		cnt_2++;
//     	}

//     	sort(a.rbegin(), a.rend());

//     	int cnt_1 = 0;
//     	while(a[0] >= 1 and a[1] >= 1 and a[2] >= 0) {
//     		a[0] -= 1;
//     		a[1] -= 1;
//     		// a[2] -= 1;
//     		cnt_1++;
//     	}

//     	cout << cnt_3 * 3 + cnt_2 * 2 + cnt_1 * 1 << "\n";



//     }

//     return 0;


// }


// Up to this are wrong code





#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
    	vector<int> p(3);
    	for(int i = 0; i < 3; i++) {
    		cin >> p[i];
    	}

    	sort(p.begin(), p.end());

    	int sum = p[0] + p[1] + p[2];

    	if(sum % 2) {
    		cout << "-1\n";
    		continue;
    	}

    	if(p[0] + p[1] < p[2]) {
    		cout << (p[0] + p[1]) << '\n';
    	}
    	else {
    		cout << sum / 2 << "\n"; 
    	}
    }

    return 0;


}