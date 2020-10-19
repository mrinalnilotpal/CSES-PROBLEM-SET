#include<bits/stdc++.h>
#include<cmath>
#include<cstring>
#include<vector>

#define lli long long int
#define connst 1e9+7

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    lli n,i;
    cin>>n;

    lli arr[n], best, sum=0;
    for(i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    best = arr[1];
    for(i=1; i<=n; i++)
    {
        sum= max(arr[i], sum+arr[i]);
        best = max(best, sum);
    }
    cout<<best<<" ";
}
