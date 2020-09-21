#include<bits/stdc++.h>

#include<vector>

#define lli long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    lli n,i;

    cin>>n;

    if(n==2 || n==3)
    {
        cout<<"NO SOLUTION"<<"\n";
    }
    else if(n==1)
    {
        cout<<1<<" ";
    }
    else{
        for(i=1; i<=n; i++)
        {
            if(i%2==0)
            {
                cout<<i<<" ";
            }
        }
                for(i=1; i<=n; i++)
        {
            if(i%2!=0)
            {
                cout<<i<<" ";
            }
        }
    }
}
