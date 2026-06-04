#include<bits/stdc++.h>
using namespace std;

vector<int> B_price;


int Upper_Bound_Func(int n,int X)
{
    int L=0,H=n,mid;

    while(L<H)
    {
        mid=L+((H-L)/2);

        if(X<B_price[mid])
        {
            H=mid;
        }
        else if(X>=B_price[mid])
        {
            L=mid+1;
        }
    }
    return H;
}

main()
{
    int n,q,price;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>price;
        B_price.push_back(price);
    }
    sort(B_price.begin(),B_price.end());
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int a;
        cin>>a;
        cout<<Upper_Bound_Func(n,a)<<"\n";
    }
}
