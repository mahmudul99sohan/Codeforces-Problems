#include<iostream>
using namespace std;

main()
{

        int x,r,step=0,a[6]= {0};
        cin>>x;

        for(int i=5; i>=1; i--)
        {
            if(x>=i)
            {
                r=x%i;
                a[i]=x/i;
                x=r;
            }
            step=a[i]+step;
        }
        cout<<step<<endl;

}
