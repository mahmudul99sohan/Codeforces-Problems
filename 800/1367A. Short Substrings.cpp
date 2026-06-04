#include<bits/stdc++.h>
using namespace std;

main()
{
    int T;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        string s;
        cin>>s;
//        cout<<s[0];
        for(int i=0;i<s.size();i+=2)
        {
            cout<<s[i];
        }
        cout<<s[s.size()-1]<<"\n";
    }
}
