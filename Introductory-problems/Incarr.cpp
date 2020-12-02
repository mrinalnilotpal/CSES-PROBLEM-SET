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

    lli n,i,coun=0;

    cin>>n;

    lli arr[n];

    for(i=1; i<=n; i++)
    {
        cin>>arr[i];
    }

    for(i=2; i<=n; i++)
    {
        if(arr[i]<arr[i-1])
        {
            coun+= arr[i-1] - arr[i];
            arr[i]=arr[i-1];
        }

    }
    cout<<coun<<"\n";
}
