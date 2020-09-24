#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
#include<cstring>
#define lli long long int
#define const 1e9+7

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    lli t,i;
    cin>>t;

    for(i=1; i<=t; i++)
    {
        lli a,b;
        cin>>a>>b;

        a = a%3;
        b = b%3;

        if(a<b)
        {
            swap(a,b);
        }

        if(a==0 && b==0)
        {
          cout<<"YES"<<"\n";
        }
        else if(a==2 && b==1)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }

    }
}
