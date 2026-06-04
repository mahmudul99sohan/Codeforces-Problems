#include<bits/stdc++.h>
using namespace std;

main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    vector<int> N_H(26,0);
    for(int i=0;i<s1.size();i++)
    {
        N_H[int(s1[i])-65]++;
    }
    for(int i=0;i<s2.size();i++)
    {
        N_H[int(s2[i])-65]++;
    }

    vector<int> CULLPRIT(26,0);
    for(int i=0;i<s3.size();i++)
    {
        CULLPRIT[int(s3[i])-65]++;
    }

    for(int i=0;i<26;i++)
    {
        if(CULLPRIT[i]!=N_H[i])
        {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";

}
