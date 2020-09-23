#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int  n,result=1,i;
    cin>>n;
  for(i=1; i<=n; i++)
  {
      result = (result*2) % 1000000007;
  }
    cout<<result<<" ";
}
