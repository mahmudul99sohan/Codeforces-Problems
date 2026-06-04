#include<iostream>
#include<vector>
using namespace std;

main()
{
    int n,p;
    cin>>n;

    vector<int> price;
    for(int i=0; i<n; i++)
    {
        cin>>p;
        price.push_back(p);
    }

    int max_index=0;

    for(int i=0; i<n; i++)
    {
        if(price[i]>price[max_index])
        {
            max_index=i;
        }
    }

    int second_max_index=-1;

    for(int i=0; i<n; i++)
    {
        if(i!=max_index)
        {
            if(second_max_index==-1)
            {
                second_max_index=i;
            }
            else if(price[i]>price[second_max_index])
            {
                second_max_index=i;
            }
        }

    }

    cout<<max_index+1<<" "<<price[second_max_index]<<"\n";


}
