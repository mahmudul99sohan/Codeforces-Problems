#include<iostream>
using namespace std;


main()
{
    int n;
    cin>>n;
    string word[n];
    for(int i=0;i<n;i++)
    {
        cin>>word[i];
    }

    for(int i=0;i<n;i++)
    {
        if(word[i].size()>10)
        {
        int s=word[i].size();
        string Array=word[i];
        int m_s=s-2;
        cout<<Array[0]<<m_s<<Array[s-1]<<endl;
        }
        else
        {
            cout<<word[i]<<endl;
        }
    }
}
