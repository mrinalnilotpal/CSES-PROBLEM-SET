#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
#include<cstring>

#define lli long long int
#define f first
#define s second
#define cons 1e9+7

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    lli n,i;
    cin>>n;

    lli arr[n-1],sum=0,finsum=0;
    for(i=1; i<=n-1; i++)
    {
        cin>>arr[i];
    }

    finsum= n*(n+1)/2;

    for(i=1; i<=n-1; i++)
    {
        sum+=arr[i];
    }

    cout<<finsum-sum ;

}
