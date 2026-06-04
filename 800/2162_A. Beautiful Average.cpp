
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
        vector <int> a(n);
        for(auto &x : a) {
            cin >> x;
        }
        int max_avg = 0;
        for(int i = 0; i < n; i++) {
            int sum = 0;
            for(int j = i; j < n; j++) {
                sum += a[j];
                int temp_avg = sum / (j - i + 1);
                max_avg = max(max_avg, temp_avg);
            }
        }

        cout << max_avg << "\n";
    }

    return 0;


}