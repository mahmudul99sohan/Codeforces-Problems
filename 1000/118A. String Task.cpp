#include<bits/stdc++.h>
using namespace std;

main()
{
    string s;
    cin>>s;
    string vowel="AEIOUYaeiouy";
    for(char ch: vowel)
    {
        s.erase(remove(s.begin(),s.end(),ch),s.end());
    }


    for(int i=0;i<s.size();i++)
    {
        if(int(s[i])<91)
        {
            int ascci=(int(s[i]))+32;
            s[i]=char(ascci);
        }
    }
    for(int i=0;i<s.size();i++)
    {
        cout<<"."<<s[i];;
    }






}
