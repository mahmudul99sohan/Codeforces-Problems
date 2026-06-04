#include<iostream>
using namespace std;

main()
{
    string s;
    cin>>s;
    int capital=0,small=0;
    int s_length=s.size();
    for(int i=0;i<s_length;i++)
    {
        if('A'<=s[i] && s[i]<='Z')
        {
            capital++;
        }
        else if('a'<=s[i] && s[i]<='z')
        {
            small++;
        }
    }

    if(capital>small)
    {
        for(int i=0;i<s_length;i++)
        {
            if('A'<=s[i] && s[i]<='Z')
        {
            continue;
        }
        else if('a'<=s[i] && s[i]<='z')
        {
            s[i]=s[i]-32;
        }
        }

    }
    else if(capital<=small)
    {
        for(int i=0;i<s_length;i++)
        {
        if('A'<=s[i] && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
        else if('a'<=s[i] && s[i]<='z')
        {
            continue;
        }
    }
    }
    cout<<s<<endl;
}
