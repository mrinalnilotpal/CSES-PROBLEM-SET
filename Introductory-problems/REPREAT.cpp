#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
#include<cstring>
#include<algorithm>
#define lli long long int
#define f first
#define s second
#define cons 1e9+7

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin>>s;

    lli n,i,sum=1,best=1;
    n = s.length();

    for(i=1; i<=n; i++)
    {
        if(s[i-1]==s[i])
        {
            sum+=1;
            best= max(sum,best);
        }
        else if(s[i-1]!=s[i])
        {
            sum=1;
            best = max(sum,best);
        }
    }
    cout<<best<<"\n";
}
