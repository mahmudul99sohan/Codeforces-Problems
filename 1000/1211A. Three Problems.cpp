#include<bits/stdc++.h>
using namespace std;

main()
{
    int N;
    cin>>N;
    vector<int> V,sort_V,dsnct_V;
    for(int n=0; n<N; n++)
    {
        int val;
        cin>>val;
        V.push_back(val);
        sort_V.push_back(val);
    }
    sort(sort_V.begin(),sort_V.end());

    for(int n=0; n<N; n++)
    {
        dsnct_V.push_back(sort_V[n]);
        while(n<N-1 && sort_V[n]==sort_V[n+1])
        {
            n++;
        }
    }
    int a=-1,b=-1,c=-1,pos_a,pos_b,pos_c;
    if(dsnct_V.size()<3)
    {
        cout<<a<<" "<<b<<" "<<c<<"\n";
    }
    else
    {
        a=dsnct_V[0];
        b=dsnct_V[1];
        c=dsnct_V[2];
        for(int n=0; n<N; n++)
        {
            if(V[n]==a)
            {
                pos_a=n;
            }
            else if(V[n]==b)
            {
                pos_b=n;
            }
            else if(V[n]==c)
            {
                pos_c=n;
            }
        }

            cout<<pos_a+1<<" "<<pos_b+1<<" "<<pos_c+1<<"\n";
    }

}
