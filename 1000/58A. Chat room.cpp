#include<bits/stdc++.h>
using namespace std;

main()
{
    string s,ideals="hello";
    cin>>s;
    bool flag[5]={0};
    int j=0,i=0;
    for(j; j<5 ;)
    {
        for(i; i<s.size(); i++)
        {
            if(s[i]==ideals[j])
            {
                flag[j]=1;
                j++;
            }
        }
        if(i==(s.size()))
        {
            break;
        }
    }
    int cnt=0;
    for(int k=0;k<5;k++)
    {
        if(flag[k]==1)
        {
            cnt++;
        }
    }

    if(j==5 && cnt==5)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}
