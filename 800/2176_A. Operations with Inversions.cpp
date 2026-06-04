// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while(t--) {
//     	int n;
//     	cin >> n;
//     	vector <int> v(n);

//     	for(int i = 0; i < n; i++) {
//     		cin >> v[i];
//     	}
//     	vector <int> prefix_max(n);
//     	int maxx = v[0]; 
//     	for(int i = 0; i < n; i++) {
//     		if(v[i] > maxx) {
//     			maxx = v[i];
//     		}
//     		prefix_max[i] = maxx;
//     	}
//     	int cnt = 0;
//     	for(int i = n - 1; i >= 1; i--) {
//     		if(prefix_max[i - 1] > v[i]) {
//     			cnt++;
//     		}
//     	}

//     	cout << cnt << "\n";
//     }

//     return 0;


// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    double mcq, quiz;
    cin >> mcq >> quiz;

    cout << ((mcq * 15) / 25) + ((quiz * 10) / 20) << "\n";

    return 0;


}