#include<bits/stdc++.h>

#define lli long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    lli n,totalsum=0,sum=0,i;

    cin>>n;
    lli arr[n];

    for(i=1; i<n; i++)
    {
        cin>> arr[i];
    }
    totalsum = n*(n+1)/2;

    for(i=1; i<n; i++)
    {
        sum+=arr[i];
    }

    cout<< totalsum - sum<<" ";



}
