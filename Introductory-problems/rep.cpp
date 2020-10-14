#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
#include<cstring>
#define lli long long int
#include<algorithm>
#define const 1e9+7

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin>>s;
    lli n,i;

    n=s.length();

    lli maxlen=1,best=1;

    for(i=0; i<n; i++)
    {
        if(s[i+1]==s[i])
        {
            maxlen++;
            best= max(maxlen,best);
        }
        else
        {
            maxlen=1;
        }
    }
    cout<<best<<"\n";
}
