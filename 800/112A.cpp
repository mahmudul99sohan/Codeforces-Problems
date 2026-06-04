#include<iostream>
using namespace std;

main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int length_s1=s1.length();
    int length_s2=s2.length();
    for(int i=0; i<length_s1; i++)
    {
        if(s1[i]>='A' && s1[i]<='Z')
        {
            s1[i]=s1[i]+32;
        }
    }
    for(int i=0; i<length_s2; i++)
    {
        if(s2[i]>='A' && s2[i]<='Z')
        {
            s2[i]=s2[i]+32;
        }
    }

    if(s1==s2)
    {
        cout<<"0";
    }
    else if(s1>s2)
    {
        cout<<"1";
    }
    else if(s1<s2)
    {
        cout<<"-1";
    }

}
