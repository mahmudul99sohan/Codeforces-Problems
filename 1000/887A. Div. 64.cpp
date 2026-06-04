#include<bits/stdc++.h>
using namespace std;

main()
{
    string s;
    cin>>s;
    bool left_one=0;
    int zero=0,L=s.size();
    for(int i=0; i<L; i++)
    {
        if(s[i]=='1')
        {
                left_one=1;
        }
        else if(left_one==1 && s[i]=='0')
        {
            zero++;
        }
    }
    if(zero>=6)
    {
        cout<<"yes\n";
    }
    else
    {
        cout<<"no\n";
    }
}
