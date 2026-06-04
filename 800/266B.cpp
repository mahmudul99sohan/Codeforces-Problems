#include<iostream>
using namespace std;

main()
{
    int n,t;
    cin>>n>>t;
    char s[n];
    cin>>s;
    char cup;
    int j=0;

    while(j<t)
    {
        int i=0;
        while(i<n)
        {
            if(s[i]=='B' &&s[i+1]=='G')
            {
                cup=s[i];
                s[i]=s[i+1];
                s[i+1]=cup;
                i=i+2;
            }
            else
            {
                i++;
            }

        }
        j++;
    }

    cout<<s;

}
