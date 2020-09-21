#include<bits/stdc++.h>
#include<iostream>
#define lli long long int

using namespace std;

int main()
{
    lli n,i;

    cin>>n;

    lli arr[n];

    for(i=1; i<=n; i++)
    {
        cin>> arr[i];
    }

    lli coun=0;

    if(n==1)
    {
        cout<<0<<" ";
    }
    else{
    for(i=1; i<=n; i++)
    {
        if(arr[i+1]<arr[i])
        {
            coun += arr[i] - arr[i+1];
            arr[i+1] = arr[i];
        }

    }
    cout<<coun<<" ";
    }

}
