#include<bits/stdc++.h>
#include<cmath>
#include<cstring>
#include<vector>

#define lli long long int
#define const 1e9+7

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    lli n,i;
    cin>>n;

    lli arr[n];

    for(i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    lli *p;
    p = &arr[1];

    sort(p,p+n);

    lli k = n/2;

    lli sum=0;
    for(i=1; i<=n; i++)
    {
        sum += abs(arr[i] - arr[k]);
    }
    cout<<sum<<"\n";
}
