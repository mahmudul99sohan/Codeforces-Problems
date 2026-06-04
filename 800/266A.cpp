#include<iostream>
using namespace std;

main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    int count1=0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            count1++;
        }
    }
    cout<<count1<<endl;
}
