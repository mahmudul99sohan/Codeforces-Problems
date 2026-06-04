#include<bits/stdc++.h>
using namespace std;

main()
{
    int T;
    cin>>T;
    for(int t=0;t<T;t++)
    {
         string s;
         cin>>s;
         transform(s.begin(),s.end(),s.begin(),::toupper);
         if(s=="YES")
         {
             cout<<"YES\n";
         }
         else
         {
             cout<<"NO\n";
         }
    }

}


//    string s,s1;
//    cin>>s>>s1;
//    cout<<"Before : "<<s<<"\n";
//    transform(s.begin(),s.end(),s.begin(), ::tolower);
//    cout<<"After  : "<<s<<"\n\n\n";
//
//    cout<<"Before : "<<s1<<"\n";
//    transform(s1.begin(),s1.end(),s1.begin(), ::toupper);
//    cout<<"After  : "<<s1<<"\n";
