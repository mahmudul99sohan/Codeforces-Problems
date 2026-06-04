#include<iostream>
using namespace std;

main()
{
    int n_game,A=0,D=0;
    cin>>n_game;
    char game[n_game];
    cin>>game;
    for(int i=0;i<n_game;i++)
    {
        if(game[i]=='A')
        {
            A++;
        }
        else if(game[i]=='D')
        {
            D++;
        }
    }

    if(A>D)
    {
        cout<<"Anton"<<endl;
    }
    else if(A<D)
    {
        cout<<"Danik"<<endl;
    }
    else if(A==D)
    {
        cout<<"Friendship"<<endl;
    }
}
