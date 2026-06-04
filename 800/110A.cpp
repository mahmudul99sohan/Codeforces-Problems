#include <iostream>
using namespace std;
main()
{
    string s;
    cin>>s;
    int s_lenth=s.size();
    int lucky=0;
    for(int i=0;i<s_lenth;i++)
    {
        if(s[i]=='4' || s[i]=='7')
        {
            lucky++;
        }
    }

    if((lucky==4) ||(lucky==7) )
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
