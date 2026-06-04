#include<iostream>
using namespace std;


main()
{
        int A[26]= {0};
        string s;
        cin>>s;
        int s_length=s.size();
        int number=0;
        for(int i=0; i<s_length; i++)
        {
            if(s[i]== 'a')
            {
                A[0]++;
            }
            else if(s[i]== 'b')
            {
                A[1]++;
            }
            else if(s[i]== 'c')
            {
                A[2]++;
            }
            else if(s[i]== 'd')
            {
                A[3]++;
            }
            else if(s[i]== 'e')
            {
                A[4]++;
            }
            else if(s[i]== 'f')
            {
                A[5]++;
            }
            else if(s[i]== 'g')
            {
                A[6]++;
            }

            else if(s[i]== 'h')
            {
                A[7]++;
            }
            else if(s[i]== 'i')
            {
                A[8]++;
            }
            else if(s[i]== 'j')
            {
                A[9]++;
            }
            else if(s[i]== 'k')
            {
                A[10]++;
            }
            else if(s[i]== 'l')
            {
                A[11]++;
            }
            else if(s[i]== 'm')
            {
                A[12]++;
            }
            else if(s[i]== 'n')
            {
                A[13]++;
            }
            else if(s[i]== 'o')
            {
                A[14]++;
            }
            else if(s[i]== 'p')
            {
                A[15]++;
            }
            else if(s[i]== 'q')
            {
                A[16]++;
            }
            else if(s[i]== 'r')
            {
                A[17]++;
            }
            else if(s[i]== 's')
            {
                A[18]++;
            }

            else if(s[i]== 't')
            {
                A[19]++;
            }
            else if(s[i]== 'u')
            {
                A[20]++;
            }
            else if(s[i]== 'v')
            {
                A[21]++;
            }
            else if(s[i]== 'w')
            {
                A[22]++;
            }
            else if(s[i]== 'x')
            {
                A[23]++;
            }
            else if(s[i]== 'y')
            {
                A[24]++;
            }
            else if(s[i]== 'z')
            {
                A[25]++;
            }
        }

        for(int i=0; i<26; i++)
        {
            if(A[i]>0)
            {
                number++;
            }
        }

        /// cout<<number<<endl;


        if(number%2 != 0)
        {

            cout<<"IGNORE HIM!"<<endl;
        }
        else
        {
            cout<<"CHAT WITH HER!"<<endl;
        }

}
