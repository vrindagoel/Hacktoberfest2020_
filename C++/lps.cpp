#include<iostream>
#include<bits/stdc++.h>
#include<cstring>

using namespace std;
int * lps(string s)
{
    int* dp= new int[s.size()];
    dp[0]=0;
    int len=0;
    int i=1;
    while(i<s.size())
    {
        if(s[len]==s[i])
        {
            len++;
            dp[i]=len;
            i++;
        }
        else
        {
            if(len>0)
            {
                len=dp[len-1];
                continue;
            }
            else
            {
                dp[i]=len;
                i++;
            }
        }
    }
    return dp;

}

int main()
{
    string s;
    cin>>s;
    int* ans=new int[s.size()];
    ans=lps(s);
    for(int i=0;i<s.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}
