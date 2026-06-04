#include<iostream>
using namespace std;

main()
{
    int X=0,num_op;
    cin>>num_op;
    string operation_1 [num_op];
    for(int i=0;i<num_op;i++)
    {
        cin>>operation_1[i];
    }
    for(int i=0;i<num_op;i++)
    {
        string statement=operation_1[i];
        if((statement[0]=='+' && statement[1]=='+' && statement[2]=='X') ||(statement[0]=='X' && statement[1]=='+' && statement[2]=='+'))
        {
            X++;
        }
        else if((statement[0]=='-' && statement[1]=='-' && statement[2]=='X') ||(statement[0]=='X' && statement[1]=='-' && statement[2]=='-'))
        {
            X--;
        }

    }
    cout<<X;

}
