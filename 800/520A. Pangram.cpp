#include<bits/stdc++.h>
using namespace std;

main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(int(s[i])>=97 && int(s[i])<=122)
        {
            s[i]=char(int(s[i])-32);
        }
    }
    bool ALPHABET[26]={0};
    for(int i=0;i<s.size();i++)
    {
        if(ALPHABET[(int(s[i])-65)]==0)
        {
            ALPHABET[(int(s[i])-65)]=1;
        }

    }
    int cnt=0;
    for(int i=0;i<26;i++)
    {
        if(ALPHABET[i]==1)
        {
            cnt++;
        }
    }
    if(cnt==26)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }


}
