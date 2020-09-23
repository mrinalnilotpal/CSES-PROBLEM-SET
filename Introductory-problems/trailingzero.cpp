#include<bits/stdc++.h>
#define lli long long int


using namespace std;

int main()
{
    lli n,i=2;
    cin>>n;

    lli coun=0;
    lli result = n/pow(5,1);

    coun+=result;
    while(result>=1)
    {
        result = n/pow(5,i);
        i+=1;
        coun+= result;
    }
    cout<<coun<<" ";
}
