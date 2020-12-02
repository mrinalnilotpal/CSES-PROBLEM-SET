#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
#include<cstring>

#define lli long long int
#define f first
#define s second
#define cons 1e9+7

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);


    lli n;
    cin>>n;

    //cout<<n<<" ";

    while(n!=1)
    {
        if(n%2==0)
        {
           cout<<n<<" ";
           n/=2;
        }
        else
        {
           cout<<n<<" ";
           n=3*n+1;
        }
    }
    cout<<1<<" ";
}
