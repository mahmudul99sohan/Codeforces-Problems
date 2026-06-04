#include<iostream>
using namespace std;

main()
{
    int T;
    cin>>T;
    char Mg[T][2];

    int c=0;

    for(int i=0;i<T;i++)
    {
        cin>>Mg[i];
    }
    for(int i=1;i<T;i++)
    {
        if(Mg[i][0]!=Mg[i-1][0])
        {
            c++;
        }
    }
    c++;

    cout<<c;
}
