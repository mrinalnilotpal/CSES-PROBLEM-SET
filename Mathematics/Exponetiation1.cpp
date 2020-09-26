#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#define lli long long int
#include<cmath>
#include<cstring>
lli modpow(lli x, lli n, lli m) ;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    lli a,b,n,i;
    cin>>n;

    for(i=1; i<=n; i++){
    cin>>a>>b;
    lli k = modpow(a,b,1e9+7);
    cout<< k  <<"\n";
    }
}
lli modpow(lli x, lli n, lli m) {
if (n == 0) return 1%m;
lli u = modpow(x,n/2,m);
u = (u*u)%m;
if (n%2 == 1) u = (u*x)%m;
return u;
}


