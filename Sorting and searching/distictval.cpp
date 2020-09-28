#include<bits/stdc++.h>
#include<vector>
#include<cmath>
#include<cstring>
#include<algorithm>

#define lli long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    lli n,i,*p,coun=1;
    cin>>n;

    lli arr[n];
    for(i=1; i<=n; i++)
    {
        cin>>arr[i];
    }

     p = &arr[1];
     sort(p,p+n);

     for(i=1; i<=n; i++)
     {
         if(arr[i]!=arr[i+1])
         {
             coun++;
         }
         else
            continue;
     }
     cout<<coun-1<<" ";
}
