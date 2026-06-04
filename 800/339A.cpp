#include<bits/stdc++.h>
using namespace std;

main()
{
    string s;
    cin>>s;
    vector<int> Num;
    int pluscnt=0;
    for(int i=0; i<s.size(); i++)
    {
        if(int(s[i])>=49 && int(s[i])<=57)
        {
            Num.push_back(int(s[i]));
        }
        else if(int(s[i])==43)
        {
            pluscnt++;
        }
    }
    sort(Num.begin(),Num.end());

    for(int i=0;i<Num.size();i++)
    {
        cout<<char(Num[i]);
        if(pluscnt!=0)
        {
            cout<<"+";
            pluscnt--;
        }
    }

}
