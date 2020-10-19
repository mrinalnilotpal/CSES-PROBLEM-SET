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

    lli n,i,*p;

    cin>>n;

    lli arr[n],coun=1;
    for(i=1; i<=n; i++)
    {
        cin>>arr[i];
    }

    p = &arr[1];

    sort(p,p+n);

    for(i=1; i<=n; i++)
    {
        if(arr[i+1]!= arr[i])
        {
            coun++;
        }
    }
    cout<<coun-1<<" ";

}
