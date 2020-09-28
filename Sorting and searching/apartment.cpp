#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cmath>

#define lli long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    lli n,m,k;
    cin>>n>>m>>k;

    lli dzsiz[n],i,coun=0;

    for(i=1; i<=n; i++)
    {
        cin>>dzsiz[i];
    }
    lli apsiz[m],j;

    for(j=1; j<=m;j++)
    {
        cin>>apsiz[j];
    }
    lli *p,*q;

    p = &dzsiz[1];
    q = &apsiz[1];

    sort(p,p+n);
    sort(q,q+m);

    i=1;
    j=1;
    while(i<=n && j<=m)
    {
        if(abs(dzsiz[i] - apsiz[j])<=k)
        {
            coun++;
            i++;
            j++;
        }
        else if(dzsiz[i]<apsiz[j])
        {
            i++;
        }
        else {
            j++;
        }
    }
    cout<<coun<<" ";

}
