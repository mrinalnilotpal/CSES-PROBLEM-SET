#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cstring>

#define lli long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    lli i=1;
    lli n = s.length();
       lli best=1,coun=1;

        for(i=0; i<n; i++)
        {
        if(s[i]==s[i+1])
        {
            coun++;
            best = max(best,coun);
        }
        else
        {
            coun=1;
        }
    }
    cout<<best<<" ";
}
