
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    for (int i = 31; i >= 0; i--)
        {
if (x&(1<<i))
    cout << "1"<<" ";
else
cout << "0"<<" ";
}
}
