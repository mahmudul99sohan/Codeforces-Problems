#include<iostream>
using namespace std;

main()
{
    int n;
    cin>>n;
    int count_=0;
    bool input[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>input[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        if(input[i][0]==1 && input[i][1]==1 && input[i][2]==1)
        {
            count_++;
        }
        else if((input[i][0]==1 && input[i][1]==1 && input[i][2]==0) || (input[i][0]==1 && input[i][1]==0 && input[i][2]==1) || (input[i][0]==0 && input[i][1]==1 && input[i][2]==1))
        {
            count_++;
        }
    }
    cout<<count_;
}
