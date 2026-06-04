#include<iostream>
using namespace std;

main()
{
    bool input[5][5];
    int m,n,step1=0,step2=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>input[i][j];
        }
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(input[i][j]==1)
            {
                m=i;
                n=j;
            }
        }
    }

    if(m>=2)
    {
        step1=m-2;
    }
    else if(m<2)
    {
        step1=2-m;
    }

    if(n>=2)
    {
        step2=n-2;
    }
    else if(n<2)
    {
        step2=2-n;
    }
    int step=step1+step2;
    cout<<step;

}
