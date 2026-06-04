#include<bits/stdc++.h>
using namespace std;

main()
{
    int T;
    cin>>T;
    for(int t=0; t<T; t++)
    {
        string s;
        cin>>s;
        if((s.size())%2==1)
        {
            cout<<"NO\n";
        }
        else
        {
            bool flag=0;
            for(int i=0,j=(s.size())/2; i<(s.size())/2; i++,j++)
            {
                if(s[i]!=s[j])
                {
                    cout<<"NO\n";
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<"YES\n";
            }


        }

    }

}
