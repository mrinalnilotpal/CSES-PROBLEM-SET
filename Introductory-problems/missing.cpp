#include<bits/stdc++.h>
#define lli long long int


using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    lli n,totsum=0,sum=0,i;
    cin>>n;

    lli arr[n-1];
    for(i=1; i<=n-1; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    totsum= n*(n+1)/2;

    cout<<totsum-sum<<"\n";

}
