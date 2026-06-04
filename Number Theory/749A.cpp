#include<bits/stdc++.h>
using namespace std;


main()
{
    int n;
    cin>>n;
    int c_n=0;
    if(n%2==0)
    {
        c_n=(n/2);
        cout<<c_n<<"\n";
        bool f=0;
        for(int i=0; i<c_n; i++)
        {


            if(f==0)
            {
                f=1;
                cout<<"2";
            }
            else
            {
                cout<<" 2";
            }

        }

    }
    else if(n%2==1)
    {
        n-=3;
        c_n=(n/2)+1;
        cout<<c_n<<"\n";
        bool f=0;
        for(int i=0; i<c_n-1; i++)
        {
            if(f==0)
            {
                f=1;
                cout<<"2";
            }
            else
            {
                cout<<" 2";
            }
        }
        cout<<" 3";
    }
}
