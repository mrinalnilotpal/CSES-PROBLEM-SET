#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
#include<cstring>
#define lli long long int
#include<algorithm>
#define const 1e9+7
#define pb push_back
#define mp make_pair

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    lli n,i,coun=0;
    cin>>n;

    lli arr[n];
    for(i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
   if(n==1)
        {
            cout<<0<<" ";
           return 0;
        }
        else{
    for(i=1; i<=n; i++)
    {
        if(arr[i+1]<arr[i])
        {
            coun+= arr[i] - arr[i+1];
            arr[i+1]=arr[i];
        }

    }
    cout<<coun<<"\n";
        }
}
