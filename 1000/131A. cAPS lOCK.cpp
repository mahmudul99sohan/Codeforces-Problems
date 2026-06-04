#include<bits/stdc++.h>
using namespace std;

main()
{
    string s;
    cin>>s;
    bool flag=0;
    for(int j=0; j<s.size(); j++)
    {
        if(int(s[j])>91 && s[j+1]<=91)

        {
            for(int i=j+1; i<s.size(); i++)
            {
                if(int(s[i])>91)
                {
                    flag=1;
                    break;
                }
            }
        }
    }
    if(flag==0)
    {
        if(int(s[0])>91)
        {
            s[0]=char(int(s[0])-32);
        }
        for(int i=1; i<s.size(); i++)
        {
            if(int(s[i])<=91)
            {
                s[i]=char(int(s[i])+32);
            }
        }
        cout<<s<<"\n";
    }
    else
    { cout<<s<<"\n";
    }


}
