#include<iostream>
using namespace std;

main()
{
    char A[100];
    cin>>A;

    int flag=0;
    for(int i=0;A[i]!='\0';i++)
    {
        if(A[i]=='H' || A[i]=='Q' || A[i]=='9')
        {
            cout<<"YES \n";
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"NO \n";
    }
}
