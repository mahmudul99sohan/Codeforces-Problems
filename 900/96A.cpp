#include<iostream>
#include<string.h>
using namespace std;

main()
{
    char s[100];
    cin>>s;

///    int size_s=strlen(s);

    int flag=0;

   for(int i=0;s[i]!='\0';i++)     /// for(int i=0;i<size_s;i++)
    {
        for(int j=i+1;j<i+7;j++)
        {
            if(s[i]==s[j])
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    if(flag==1)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }

}
