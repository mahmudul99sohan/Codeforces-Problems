#include<iostream>
#include<string.h>
using namespace std;

main()
{
    char ch1[1000],ch2[1000];

    cin>>ch1>>ch2;

    int ch1_len=strlen(ch1);

    for(int i=0;i<ch1_len;i++)
    {
        if(ch1[i]!=ch2[i])
        {
            cout<<1;
        }
        else if(ch1[i]==ch2[i])
        {
            cout<<0;
        }
    }
}
