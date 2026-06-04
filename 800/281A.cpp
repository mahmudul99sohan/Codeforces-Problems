#include<iostream>
using namespace std;

main()
{
    char input[1000];

    while(1)
    {
        cin>>input;

    if('A'<=input[0] && input[0]<='Z')
    {
        cout<<input<<endl;
    }

    else if('a'<=input[0] && input[0]<='z')
    {
        input[0]=input[0]-32;
        cout<<input<<endl;
    }
    }
}
