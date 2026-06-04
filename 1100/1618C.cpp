// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;
// using pii = pair<int,int>;
// using pll = pair<ll,ll>;
// using vi = vector <int>;
// using vl = vector <ll>;

// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()

// void solve() {
//     int n;
//     cin >> n;

//     vector <ll> a(n);

//     for(int i = 0; i < n; i++) {
//     	cin >> a[i];
//     }

//     ll gc_1 = 0;
//     ll gc_2 = 0;


//     for(int i = 0; i < n; i++) {
//         if(i & 1) {
//     	   gc_1 = __gcd(gc_1, a[i]);
//         }
//         else {
//             gc_2 = __gcd(gc_2, a[i]);
//         }
//     }

//     bool flag = true;

//     for(int i = 0; i < n; i += 2) {
//         if(a[i] % gc_1 == 0) {
//             flag = false;
//             break;
//         }
//     }

//     if(flag) {
//         cout << gc_1 << '\n';
//         return;
//     }



//     flag = true;

//     for(int i = 1; i < n; i += 2) {
//         if(a[i] % gc_2 == 0) {
//             flag = false;
//             break;
//         }
//     }


//     if(flag) {
//         cout << gc_2 << '\n';
//     }
//     else{
//         cout << 0 << '\n';
//     }

//     return;





// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t = 1;
//     cin >> t;
//     while (t--) {
    
//         solve();


//     }
//     return 0;
// }

























// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;
// using pii = pair<int,int>;
// using pll = pair<ll,ll>;
// using vi = vector <int>;
// using vl = vector <ll>;

// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()

// void solve() {
//     int x, y;
//     cin >> x >> y;

//     if((x & 1) == 1 and (y & 1) == 1) {
//         cout << "NO\n";
//     }
//     else {
//         cout << "YES\n";
//     }
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t = 1;
//     cin >> t;
//     while (t--) {
    
//         solve();


//     }
//     return 0;
// }








// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;
// using pii = pair<int,int>;
// using pll = pair<ll,ll>;
// using vi = vector <int>;
// using vl = vector <ll>;

// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()

// void solve() {
//     int n;
//     cin >> n;

//     string s; cin >> s;
//     int open = 0, close = 0;
//     for(auto c : s) {
//         if(c == '(') {
//             open++;
//         }
//         if(c == ')') {
//             close++;
//         }
//     }
//     // cout << open << ' ' << close << '\n';

//     if(close == open) {
//         cout << "YES\n";
//     }
//     else {
//         cout << "NO\n";
//     }
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t = 1;
//     cin >> t;
//     while (t--) {
    
//         solve();


//     }
//     return 0;
// }























#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector <int>;
using vl = vector <ll>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n;
    cin >> n;

    vector <int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector <int> mp2_3, mp_not_2_3, mp2, mp3;

    for(int i = 0; i < n; i++) {
        map <int,int> fr;
        int val = v[i];
        for(int d = 2; d <= 3; d++) {
            while(val % d == 0) {
                fr[d]++;
                val /= d;
            }
        }
        if(fr.size() == 2) {
            mp2_3.push_back(v[i]);
        }
        else if(fr.size() == 1) {
            if(fr[2] > 0) {
                mp2.push_back(v[i]);
            }
            if(fr[3] > 0) {
                mp3.push_back(v[i]);
            }
        }
        else {
            mp_not_2_3.push_back(v[i]);
        }
    }

    int len = mp2_3.size() / 2;
    int k = 0;
    if(mp2_3.size() & 1) {
        
        for(; k <= len; k++) {
            cout << mp2_3[k] << ' ';
        }
    }
    else {
        for(; k < len; k++) {
            cout << mp2_3[k] << ' ';
        }
    }


    for(auto x : mp2) {
        cout << x << ' ';
    }

    for(auto x : mp_not_2_3) {
        cout << x << ' ';
    }

    for(auto x : mp3) {
        cout << x << ' ';
    }

    for(; k < mp2_3.size(); k++) {
        cout << mp2_3[k] << ' ';
    }
    cout << '\n';


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
    
        solve();


    }
    return 0;
}