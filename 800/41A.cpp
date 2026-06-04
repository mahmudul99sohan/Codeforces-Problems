#include<iostream>
using namespace std;

main()
{
    string s,t;
    cin>>s;
    cin>>t;
    int s_length=s.size();
    bool b=1;
    for(int i=0; i<s_length; i++)
    {
       if(s[i]!=t[s_length-i-1])
       {
           b=0;
       }
    }

    if(b==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
